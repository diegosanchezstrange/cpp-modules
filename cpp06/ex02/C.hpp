//
// Created by diego on 10/24/22.
//

#ifndef C_HPP
#define C_HPP

#include "Base.hpp"

class C: public Base
{
public:
    C(){};
    C(const C & obj): Base() { (void)obj; };
    ~C(){};
    C & operator=(const C & obj){ (void)obj; return (*this); };
};

#endif //C_HPP
