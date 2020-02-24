#ifndef __TRUNC_HPP__
#define __TRUNC_HPP__

#include "decorator.hpp"
#include <cmath>

class Trunc : public Decorator
{
public:
    Trunc(Base *deco) : Decorator(deco){};

    virtual std::string stringify()
    {
        return std::to_string(deco->evaluate());
    }
};


#endif
