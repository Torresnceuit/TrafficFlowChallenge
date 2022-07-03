#include "FlowController.h"

namespace TrafficFlowChallenge
{
FlowController::FlowController(const IntersectionInfo& inputInfo)
{
	_intersectionInfo.northCPM = inputInfo.northCPM;
	_intersectionInfo.eastCPM = inputInfo.eastCPM;
	_intersectionInfo.southCPM = inputInfo.southCPM;
	_intersectionInfo.westCPM = inputInfo.westCPM;
}

int FlowController::totalCPMs() const
{
	return _intersectionInfo.northCPM + _intersectionInfo.eastCPM + _intersectionInfo.southCPM + _intersectionInfo.westCPM;
}

void FlowController::consult() const
{
	if(totalCPMs() >= 20) // High Throughput
	{
		
	}
}
}
