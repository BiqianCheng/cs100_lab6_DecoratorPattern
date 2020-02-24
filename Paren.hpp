#ifndef __PAREN_HPP__
#define __PAREN_HPP__

#include "decorator.hpp"
#include <cmath>

class Paren : public Decorator
{
public:
	Paren(Base *deco):Decorator(deco){};

	virtual std::string stringify()
	{
		return "(" + deco -> stringify()+")";
	}

};

#endif
