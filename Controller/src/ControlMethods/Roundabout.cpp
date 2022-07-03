#include "Roundabout.h"

namespace TrafficFlowChallenge
{
	Roundabout::Roundabout(const int& totalCPMs)
	: BaseMethod(totalCPMs)
	{
		run();
	}

	double Roundabout::efficient()
	{
		double efficient;
		if(_totalCPMs >= 20)
		{
			return 0.5;
		}
		
		if(_totalCPMs >= 10 && _totalCPMs < 20)
		{
			return 0.75;
		}
		
		if(_totalCPMs < 10)
		{
			return 0.9;
		}
	}
}

