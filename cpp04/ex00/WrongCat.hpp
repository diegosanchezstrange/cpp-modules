//
// Created by Diego Sanchez strange on 17/06/2022.
//

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
    WrongCat();
    ~WrongCat();
    WrongCat(WrongCat const &obj);
    WrongCat &operator=(WrongCat const &obj);
    void makeSound(void) const;
};


#endif //WRONGCAT_H
