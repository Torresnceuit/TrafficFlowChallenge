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
	
	Throughput ControlMethod::getThroughput()
	{
		int total = totalCPMs();
		if(total >= 20) return Throughput::HIGH;
		if(total >=10 && total < 20) return Throughput::MEDIUM;
		return Throughput::LOW;
	}
}
