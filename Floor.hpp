#ifndef __FLOOR_HPP__
#define __FLOOR_HPP__

#include "decorator.hpp"
#include <cmath>

class Floor: public Decorator
{
	public:
		Floor(Base* deco): Decorator(deco) {} 
		virtual double evaluate()
		{
			return floor(deco->evaluate());
		}
};

#endif
