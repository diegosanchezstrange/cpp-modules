//
// Created by diego on 10/24/22.
//

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base {

public:
    Base();
    Base(const Base & obj);
    virtual ~Base();
    Base & operator=(const Base & obj);
};


#endif //BASE_HPP
