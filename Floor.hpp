#ifndef __FLOOR_HPP__
#define __FLOOR_HPP__

#include "base.hpp"

class Floor: public Base
{
	protected:
		Base* child;
		int f;
	public:
		Floor(): child(NULL) {}
		Floor(Base* number): child(number) {} 
		virtual double evaluate()
		{
			f=floor(child->evaluate());
			return f;
		}
		virtual std::string stringify()
		{
		
			return f->stringify();

		}
};

#endif
