#include "TrafficLights.h"
#include <iostream>

namespace TrafficFlowChallenge
{
	TrafficLights::TrafficLights(const IntersectionInfo& info)
	: ControlMethod(info)
	{
	}
	
	TrafficLights::~TrafficLights()
	{
	
	}

	double TrafficLights::efficiency()
	{
		if(getThroughput() == Throughput::HIGH)
		{
			return 0.9;
		}
		
		if(getThroughput() == Throughput::LOW)
		{
			return 0.75;
		}
		
		if(getThroughput() == Throughput::MEDIUM)
		{
			return 0.3;
		}
	}
	
	void TrafficLights::run()
	{
		std::cout << "TrafficLights Efficient score for total CPMs = " << totalCPMs() << " is " << efficiency() * 100 << " %" << std::endl;
	}
}

