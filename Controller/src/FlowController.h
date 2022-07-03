#pragma once
#include <memory>

#include "Utils.h"

namespace TrafficFlowChallenge
{
	using namespace Utils;
	enum class ControlMethod
	{
		ROUNDABOUT,
		STOP_SIGNAL,
		TRAFFIC_LIGHTS
	};

	class FlowController
	{
		public:
			explicit FlowController(const IntersectionInfo& inputInfo);
			~FlowController() = default;

		private:
			void consult() const;
			int totalCPMs() const;

		private:
			IntersectionInfo _intersectionInfo;
	};
}
