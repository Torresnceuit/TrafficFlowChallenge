#include "ControlMethod.h"
#include <iostream>

namespace TrafficFlowChallenge
{
ControlMethod::ControlMethod(const IntersectionInfo& info)
	: _intersectionInfo(info)
{
}

void ControlMethod::run()
{
	std::cout << "Efficient score: " << efficiency();
}

int ControlMethod::totalCPMs()
{
	return _intersectionInfo.northCPMs + _intersectionInfo.eastCPMs + _intersectionInfo.southCPMs + _intersectionInfo.westCPMs;
}

Throughput ControlMethod::getThroughput(RoadWay road)
{
	int total = totalCPMs();
	switch(road)
	{
		case RoadWay::NORTH:
			total = _intersectionInfo.northCPMs;
			break;
		case RoadWay::EAST:
			total = _intersectionInfo.eastCPMs;
			break;
		case RoadWay::SOUTH:
			total = _intersectionInfo.southCPMs;
			break;
		case RoadWay::WEST:
			total = _intersectionInfo.westCPMs;
			break;
		default:
			total = totalCPMs();
			break;
	}
	if(total >= 20) return Throughput::HIGH;
	if(total >= 10 && total < 20) return Throughput::MEDIUM;
	return Throughput::LOW;
}
}
