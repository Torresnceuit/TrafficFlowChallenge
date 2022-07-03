#include "StopSignal.h"
#include <iostream>

namespace TrafficFlowChallenge
{
	StopSignal::StopSignal(const IntersectionInfo& info)
	: ControlMethod(info)
	{
		run();
	}
	
	StopSignal::~StopSignal()
	{
	
	}

	double StopSignal::efficiency()
	{
		double efficient;
		if(totalCPMs() >= 20)
		{
			return 0.2;
		}
		
		if(totalCPMs() >= 10 && totalCPMs() < 20)
		{
			return 0.3;
		}
		
		if(totalCPMs() < 10)
		{
			return 0.4;
		}
	}
	
	void StopSignal::run()
	{
		std::cout << "Stop Signals Efficient score for total CPMs = " << totalCPMs() << " is " << efficiency() * 100 << " %" << std::endl;
	}
}

