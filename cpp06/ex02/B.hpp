//
// Created by diego on 10/24/22.
//

#ifndef B_HPP
#define B_HPP

#include "Base.hpp"

class B: public Base
{
public:
    B(){};
    B(const B & obj): Base() { (void)obj; };
    ~B(){};
    B & operator=(const B & obj){ (void)obj; return (*this); };
};

#endif //B_HPP
