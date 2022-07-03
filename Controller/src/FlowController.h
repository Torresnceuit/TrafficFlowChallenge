#pragma once
#include <memory>
#include <functional>

#include "IntersectionInfo.h"

namespace TrafficFlowChallenge
{
	enum class Method
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
			void consult(Method method) const;
			int totalCPMs() const;

		private:
			IntersectionInfo _intersectionInfo;
	};
}
