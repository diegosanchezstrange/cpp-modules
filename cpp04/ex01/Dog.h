//
// Created by Diego Sanchez strange on 17/06/2022.
//

#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog: public Animal
{
public:
    Dog();
    ~Dog();
    Dog(Dog const &obj);
    Dog &operator=(Dog const &obj);
    void makeSound(void) const;

};


#endif //DOG_H
