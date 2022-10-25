//
// Created by diego on 10/24/22.
//

#include "Base.hpp"

Base::~Base()
{
    std::cout << "Base destructor" << std::endl;
}

Base::Base() {}

Base::Base(const Base &obj) { (void)obj; }

Base &Base::operator=(const Base &obj)
{
    (void)obj;
    return (*this);
}
