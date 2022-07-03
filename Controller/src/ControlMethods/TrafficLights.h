#pragma once
#include "BaseMethod.h"

namespace TrafficFlowChallenge
{
	class TrafficLights : public BaseMethod
	{
		public:
			explicit TrafficLights(const int& totalCPMs);
			virtual ~TrafficLights();
			virtual double efficient() override;
	};
}
