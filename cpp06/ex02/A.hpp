//
// Created by diego on 10/24/22.
//

#ifndef A_HPP
#define A_HPP

#include "Base.hpp"

class A: public Base
{
public:
    A(){};
    A(const A & obj): Base() { (void)obj; };
    ~A(){};
    A & operator=(const A & obj){ (void)obj; return (*this); };
};

#endif //A_HPP
