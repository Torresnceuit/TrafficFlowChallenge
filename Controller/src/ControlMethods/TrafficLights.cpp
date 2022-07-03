#include "StopSignal.h"

namespace TrafficFlowChallenge
{
	TrafficLight::TrafficLight(const int& totalCPMs)
	: BaseMethod(totalCPMs)
	{
		run();
	}

	double TrafficLight::efficient()
	{
		double efficient;
		if(_totalCPMs >= 20)
		{
			return 0.9;
		}
		
		if(_totalCPMs >= 10 && _totalCPMs < 20)
		{
			return 0.75;
		}
		
		if(_totalCPMs < 10)
		{
			return 0.3;
		}
	}
}

