#include "Roundabout.h"
#include <iostream>

namespace TrafficFlowChallenge
{
	Roundabout::Roundabout(const int& totalCPMs)
	: BaseMethod(totalCPMs)
	{
		run();
	}
	
	Roundabout::~Roundabout()
	{
	
	}

	double Roundabout::efficient()
	{
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
	
	void Roundabout::run()
	{
		std::cout << "Roundabout Efficient score for totalCPMs " << _totalCPMs << " is " << efficient() << std::endl;
	}
}

