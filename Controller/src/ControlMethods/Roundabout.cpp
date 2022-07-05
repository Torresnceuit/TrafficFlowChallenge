#include "Roundabout.h"
#include "IntersectionInfo.h"
#include <iostream>

namespace TrafficFlowChallenge
{
Roundabout::Roundabout(const IntersectionInfo& info)
	: ControlMethod(info)
{
}

Roundabout::~Roundabout()
{

}

double Roundabout::efficiency()
{
	double efficiency = 0.0;
	if(getThroughput() == Throughput::HIGH)
	{
		efficiency = 0.5;
	}

	if(getThroughput() == Throughput::MEDIUM)
	{
		efficiency = 0.75;
	}

	if(getThroughput() == Throughput::LOW)
	{
		efficiency = 0.9;
	}

	if((getThroughput(RoadWay::NORTH) == Throughput::HIGH || getThroughput(RoadWay::SOUTH) == Throughput::HIGH)
	   && (getThroughput(RoadWay::EAST) == Throughput::HIGH || getThroughput(RoadWay::WEST) == Throughput::HIGH))
	{
		efficiency += 0.1;
	}
	
	return efficiency;
}

void Roundabout::run()
{
	std::cout << "Roundabout Efficient score for total CPMs = " << totalCPMs() << " is " << efficiency() * 100 << " %" << std::endl;
}
}
