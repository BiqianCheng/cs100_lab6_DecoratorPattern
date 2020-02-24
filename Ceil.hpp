#ifndef __CEIL_HPP__
#define __CEIL_HPP__

#include "decorator.hpp"
#include <cmath>

class Ceiling: public Decorator
{
	public:
		Ceiling(Base* deco): Decorator(deco) {}
		virtual double evaluate()
		{
			return ceil(deco->evaluate());
		}
};

#endif
