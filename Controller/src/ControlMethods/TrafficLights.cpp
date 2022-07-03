#include "TrafficLights.h"
#include <iostream>

namespace TrafficFlowChallenge
{
	TrafficLights::TrafficLights(const int& totalCPMs)
	: BaseMethod(totalCPMs)
	{
		run();
	}
	
	TrafficLights::~TrafficLights()
	{
	
	}

	double TrafficLights::efficient()
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
	
	void TrafficLights::run()
	{
		std::cout << "TrafficLights Efficient score for totalCPMs " << _totalCPMs << " is " << efficient() << std::endl;
	}
}

