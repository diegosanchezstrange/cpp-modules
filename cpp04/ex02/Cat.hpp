#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain * brain;
public:
    Cat();
    ~Cat();
    Cat(Cat const &obj);
    Cat &operator=(Cat const &obj);
    void makeSound(void) const;
	Brain * getBrain(void);

};

#endif //CAT_H
