#ifndef __PAREN_HPP__
#define __PAREN_HPP__

#include "base.hpp"

class Paren:public Base
{
public:
	Paren(Base *Tx):Base(Tx){};

	virtual string stringify()
	{
		return "("+x->stringify()+")";
	};


}
#endif
