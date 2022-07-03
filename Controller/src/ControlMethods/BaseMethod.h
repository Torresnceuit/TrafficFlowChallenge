#pragma once
#include <memory>

namespace TrafficFlowChallenge
{
class BaseMethod
{
public:
	explicit BaseMethod(const int& totalCPMs);
	virtual ~BaseMethod() = default;
	virtual double efficient() = 0;
	virtual void run() = 0;

protected:
	int _totalCPMs;
};
}
