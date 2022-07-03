#include "FlowController.h"
#include "ControlMethods/ControlMethod.h"
#include "ControlMethods/Roundabout.h"
#include "ControlMethods/StopSignal.h"
#include "ControlMethods/TrafficLights.h"
#include "IntersectionInfo.h"

namespace TrafficFlowChallenge
{
FlowController::FlowController(const IntersectionInfo& inputInfo)
{
	_intersectionInfo.northCPMs = inputInfo.northCPMs;
	_intersectionInfo.eastCPMs = inputInfo.eastCPMs;
	_intersectionInfo.southCPMs = inputInfo.southCPMs;
	_intersectionInfo.westCPMs = inputInfo.westCPMs;
}

int FlowController::totalCPMs() const
{
	return _intersectionInfo.northCPMs + _intersectionInfo.eastCPMs + _intersectionInfo.southCPMs + _intersectionInfo.westCPMs;
}

void FlowController::consult(Method method) const
{
	ControlMethod* runMethod = nullptr;
	switch(method)
	{
		case Method::ROUNDABOUT:
			runMethod = new Roundabout(_intersectionInfo);
			break;

		case Method::STOP_SIGNAL:
			runMethod = new StopSignal(_intersectionInfo);
			break;

		case Method::TRAFFIC_LIGHTS:
			runMethod = new TrafficLights(_intersectionInfo);
			break;

		default:
			runMethod = new Roundabout(_intersectionInfo);
			runMethod = new StopSignal(_intersectionInfo);
			runMethod = new TrafficLights(_intersectionInfo);
	}
	
	delete  runMethod;
}

void FlowController::run()
{
	consult(Method::INVALID);
}
}
