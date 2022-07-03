#pragma once
#include "ControlMethod.h"

namespace TrafficFlowChallenge
{
class Roundabout : public ControlMethod
{
public:
	explicit Roundabout(const IntersectionInfo& info);
	virtual ~Roundabout();
	virtual double efficiency() override;
	virtual void run() override;
};
}
