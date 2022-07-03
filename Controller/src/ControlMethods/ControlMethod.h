#pragma once
#include <memory>

#include "IntersectionInfo.h"

namespace TrafficFlowChallenge
{
enum class Throughput
{
	LOW,
	MEDIUM,
	HIGH
};

class ControlMethod
{
public:
	explicit ControlMethod(const IntersectionInfo& info);
	virtual ~ControlMethod() = default;
	int totalCPMs();
	Throughput getThroughput();
	virtual double efficiency() = 0;
	virtual void run() = 0;

protected:
	IntersectionInfo _intersectionInfo;
};
}
