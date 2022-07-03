#include "ControlMethod.h"
#include <iostream>

namespace TrafficFlowChallenge
{
	ControlMethod::ControlMethod(const IntersectionInfo& info)
	: _intersectionInfo(info)
	{
	}
	
	void ControlMethod::run()
	{
		std::cout << "Efficient score: " << efficiency();
	}
	
	int ControlMethod::totalCPMs()
	{
		return _intersectionInfo.northCPMs + _intersectionInfo.eastCPMs + _intersectionInfo.southCPMs + _intersectionInfo.westCPMs;
	}
}
