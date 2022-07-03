#pragma once
#include "BaseMethod.h"

namespace TrafficFlowChallenge
{
	class StopSignal : public BaseMethod
	{
		public:
			explicit StopSignal(const int& totalCPMs);
			virtual ~StopSignal();
			virtual double efficient() override;
			virtual void run() override;
	};
}
