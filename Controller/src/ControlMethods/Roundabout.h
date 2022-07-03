#pragma once
#include "BaseMethod.h"

namespace TrafficFlowChallenge
{
class Roundabout : public BaseMethod
{
public:
	explicit Roundabout(const int& totalCPMs);
	virtual ~Roundabout();
	virtual double efficient() override;
	//virtual void run() override;
};
}
