#include "BaseMethod.h"
#include <iostream>

namespace TrafficFlowChallenge
{
	BaseMethod::BaseMethod(const int& totalCPMs)
	: _totalCPMs(totalCPMs)
	{
	}
	
	void BaseMethod::run()
	{
		std::cout << "Efficient score: " << efficient();
	}
}
