#ifndef __ABS_HPP__
#define __ABS_HPP__

#include "decorator.hpp"
#include <cmath>

class Absolute : public Decorator
{
public:
	Absolute(Base *deco) : Decorator(deco){};
	virtual double evaluate()
	{
		return fabs(deco->evaluate());
	}
};

#endif
