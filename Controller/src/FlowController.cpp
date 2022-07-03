#include "FlowController.h"
#include "ControlMethods/BaseMethod.h"
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

void FlowController::consult(ControlMethod method) const
{
	BaseMethod* runMethod = nullptr;
	switch(method)
	{
		case ControlMethod::ROUNDABOUT:
			runMethod = new Roundabout(totalCPMs());
			break;

		case ControlMethod::STOP_SIGNAL:
			runMethod = new StopSignal(totalCPMs());
			break;

		case ControlMethod::TRAFFIC_LIGHTS:
			runMethod = new TrafficLights(totalCPMs());
			break;

		default:
			runMethod = new Roundabout(totalCPMs());
			runMethod = new StopSignal(totalCPMs());
			runMethod = new TrafficLights(totalCPMs());
	}
}

void FlowController::run()
{
	consult(ControlMethod::INVALID);
}
}
