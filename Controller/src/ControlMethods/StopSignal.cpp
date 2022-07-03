#include "StopSignal.h"
#include <iostream>

namespace TrafficFlowChallenge
{
	StopSignal::StopSignal(const IntersectionInfo& info)
	: ControlMethod(info)
	{
	}
	
	StopSignal::~StopSignal()
	{
	
	}

	double StopSignal::efficiency()
	{
		if(getThroughput() == Throughput::HIGH)
		{
			return 0.2;
		}
		
		if(getThroughput() == Throughput::MEDIUM)
		{
			return 0.3;
		}
		
		if(getThroughput() == Throughput::LOW)
		{
			return 0.4;
		}
	}
	
	void StopSignal::run()
	{
		std::cout << "Stop Signals Efficient score for total CPMs = " << totalCPMs() << " is " << efficiency() * 100 << " %" << std::endl;
	}
}

