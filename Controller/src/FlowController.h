#pragma once
#include <memory>

#include "IntersectionInfo.h"

namespace TrafficFlowChallenge
{
	enum class ControlMethod
	{
		ROUNDABOUT,
		STOP_SIGNAL,
		TRAFFIC_LIGHTS,
		INVALID
	};

	class FlowController
	{
		public:
			explicit FlowController(const IntersectionInfo& inputInfo);
			~FlowController() = default;
			void run();

		private:
			void consult(ControlMethod method) const;
			int totalCPMs() const;

		private:
			IntersectionInfo _intersectionInfo;
	};
}
