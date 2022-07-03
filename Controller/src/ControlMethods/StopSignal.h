#pragma once
#include "ControlMethod.h"

namespace TrafficFlowChallenge
{
	class StopSignal : public ControlMethod
	{
		public:
			explicit StopSignal(const IntersectionInfo& info);
			virtual ~StopSignal();
			virtual double efficiency() override;
			virtual void run() override;
	};
}
