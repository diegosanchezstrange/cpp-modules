#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat: public Animal
{
public:
    Cat();
    ~Cat();
    Cat(Cat const &obj);
    Cat &operator=(Cat const &obj);
    void makeSound(void) const;

};

#endif //CAT_H
