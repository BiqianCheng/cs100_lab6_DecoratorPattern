#ifndef __CEIL_HPP__
#define __CEIL_HPP__

#include "base.hpp"
class Ceiling: public Base
{
	protected:
		Base* child;
		int c;
	public:
		Ceiling(): child(NULL) {}
		Ceiling(Base* number): child(number) {}
		virtual double evaluate()
		{
			c=ceil(child->evaluate());		
			return c;
		}
		virtual std::string stringify()
		{		
			return c->stringify();
		}
		
};

#endif
