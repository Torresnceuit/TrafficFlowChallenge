#include "BaseMethod.h"

namespace TrafficFlowChallenge
{
	BaseMethod::BaseMethod(const int& totalCPMs)
	: _totalCPMs(totalCPMs)
	{
	}
	
	BaseMethod::run()
	{
		std::cout << "Efficient score: " << _efficient;
	}
}
