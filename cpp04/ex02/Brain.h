//
// Created by Diego Sanchez strange on 17/06/2022.
//

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain
{
public:
    Brain();
    ~Brain();
    Brain(Brain const &obj);
    Brain &operator=(Brain const &obj);

    std::string arr[100];
};


#endif //BRAIN_H
