#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{

protected:
    std::string type;

public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(WrongAnimal const &obj);
    WrongAnimal &operator=(WrongAnimal const &obj);
    void makeSound(void) const;
    std::string getType(void) const;
};


#endif //WRONGANIMAL_H
