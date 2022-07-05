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

enum class RoadWay
{
	NORTH,
	EAST,
	SOUTH,
	WEST,
	ALL
};

class ControlMethod
{
public:
	explicit ControlMethod(const IntersectionInfo& info);
	virtual ~ControlMethod() = default;
	int totalCPMs();
	Throughput getThroughput(RoadWay road = RoadWay::ALL);
	virtual double efficiency() = 0;
	virtual void run() = 0;

protected:
	IntersectionInfo _intersectionInfo;
};
}
