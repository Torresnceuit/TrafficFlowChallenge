#pragma once
#include <memory>

#include "IntersectionInfo.h"

namespace TrafficFlowChallenge
{
class ControlMethod
{
public:
	explicit ControlMethod(const IntersectionInfo& info);
	virtual ~ControlMethod() = default;
	virtual int totalCPMs();
	virtual double efficiency() = 0;
	virtual void run() = 0;

protected:
	IntersectionInfo _intersectionInfo;
};
}
