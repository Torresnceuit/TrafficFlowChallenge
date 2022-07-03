#pragma once
#include "ControlMethod.h"

namespace TrafficFlowChallenge
{
	class TrafficLights : public ControlMethod
	{
		public:
			explicit TrafficLights(const IntersectionInfo& info);
			virtual ~TrafficLights();
			virtual double efficiency() override;
			virtual void run() override;
	};
}
