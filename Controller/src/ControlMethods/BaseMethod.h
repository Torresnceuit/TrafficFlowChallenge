#pragma once
#include <memory>

namespace TrafficFlowChallenge
{
class BaseMethod
{
public:
	explicit BaseMethod(int totalCPMs);
	virtual ~BaseMethod() = default;
	virtual double efficient() = 0;
	virtual void run();

private:
	int _totalCPMs;
	double _efficient;
};
}
