#ifndef __ABS_HPP__
#define __ABS_HPP__

#include "base.hpp"

class Absolute: public Base
{
	protected:
		Base* child;
		int a;
	public:
		Absolute(): child(NULL) {}
		Absolute(Base* number): child(number) {}
		double evaluate()
		{
			a=fabs(child->evaluate());		
			return fabs(child->evaluate());
		}
		 virtual std::string stringify()
                {
                        return a->stringify();
                }

};

#endif
