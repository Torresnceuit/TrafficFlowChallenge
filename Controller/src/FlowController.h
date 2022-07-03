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
		ALL,
		INVALID
	};
	
	class ControlMethod;

	class FlowController
	{
		public:
			explicit FlowController(const IntersectionInfo& inputInfo);
			~FlowController() = default;
			void run(Method method) const;

		private:
			void internalRun(ControlMethod* method) const;

		private:
			IntersectionInfo _intersectionInfo;
	};
}
