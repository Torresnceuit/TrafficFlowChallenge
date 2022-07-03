#include "TrafficLights.h"
#include <iostream>

namespace TrafficFlowChallenge
{
	TrafficLights::TrafficLights(const IntersectionInfo& info)
	: ControlMethod(info)
	{
		run();
	}
	
	TrafficLights::~TrafficLights()
	{
	
	}

	double TrafficLights::efficiency()
	{
		double efficient;
		if(totalCPMs() >= 20)
		{
			return 0.9;
		}
		
		if(totalCPMs() >= 10 && totalCPMs() < 20)
		{
			return 0.75;
		}
		
		if(totalCPMs() < 10)
		{
			return 0.3;
		}
	}
	
	void TrafficLights::run()
	{
		std::cout << "TrafficLights Efficient score for total CPMs = " << totalCPMs() << " is " << efficiency() * 100 << " %" << std::endl;
	}
}

