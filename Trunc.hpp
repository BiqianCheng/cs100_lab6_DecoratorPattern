#ifndef __TRUNC_HPP__
#define __TRUNC_HPP__

#include "base.hpp"

class Trunc : public Base
{

public:
    Trunc(Base *Tx) : Base(Tx){};

    virtual string stringify()
    {
        return to_string(x->evaluate());
    }


#endif
