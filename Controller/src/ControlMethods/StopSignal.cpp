#include "StopSignal.h"

namespace TrafficFlowChallenge
{
	StopSignal::StopSignal(const int& totalCPMs)
	: BaseMethod(totalCPMs)
	{
		run();
	}

	double StopSignal::efficient()
	{
		double efficient;
		if(_totalCPMs >= 20)
		{
			return 0.2;
		}
		
		if(_totalCPMs >= 10 && _totalCPMs < 20)
		{
			return 0.3;
		}
		
		if(_totalCPMs < 10)
		{
			return 0.4;
		}
	}
}

