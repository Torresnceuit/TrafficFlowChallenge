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
	_intersectionInfo = inputInfo;
}

void FlowController::run(Method method) const
{
	switch(method)
	{
		case Method::ROUNDABOUT:
			internalRun(new Roundabout(_intersectionInfo));
			break;

		case Method::STOP_SIGNAL:
			internalRun(new StopSignal(_intersectionInfo));
			break;

		case Method::TRAFFIC_LIGHTS:
			internalRun(new TrafficLights(_intersectionInfo));
			break;

		default:
			internalRun(new Roundabout(_intersectionInfo));
			internalRun(new StopSignal(_intersectionInfo));
			internalRun(new TrafficLights(_intersectionInfo));
	}
}

void FlowController::internalRun(ControlMethod *method) const
{
	method->run();
}
}
