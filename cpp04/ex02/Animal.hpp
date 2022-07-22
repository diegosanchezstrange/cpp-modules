#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{

protected:
    std::string type;

public:
    Animal();
    virtual ~Animal();
    Animal(Animal const &obj);
    Animal &operator=(Animal const &obj);
	//Pure virtual function
    virtual void makeSound(void) const = 0;
    std::string getType(void) const;
};


#endif //ANIMAL_H
