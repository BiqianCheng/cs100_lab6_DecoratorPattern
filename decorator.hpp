#ifndef __DECORATOR_HPP__
#define __DECORATOR_HPP__

#include "base.hpp"
#include <cmath>

class Decorator : public Base
{
protected:
    Base *deco;

public:
    Decorator(Base *deco) : Base()
    {
        this->deco = deco;
    }
    virtual double evaluate()
    {
        return deco->evaluate();
    }
    virtual std::string stringify(){
        return deco->stringify();
    }
};

#endif
