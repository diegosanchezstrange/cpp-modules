#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main(void)
{
    const Dog* j = new Dog();
    const Cat* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();

	// TEST DEEP COPY

	j->getBrain()->arr[0] = "Dog brilliant idea";
	j->getBrain()->arr[1] = "Dog stupid idea";

	const Dog dog2 = Dog(*j);

	std::cout << std::endl << dog2.getBrain()->arr[0] << std::endl;
	std::cout << dog2.getBrain()->arr[1] << std::endl << std::endl;

	j->getBrain()->arr[0] = "Dog first stupid idea idea";

	std::cout << std::endl << dog2.getBrain()->arr[0] << std::endl;
	std::cout << dog2.getBrain()->arr[1] << std::endl << std::endl;

	Dog * dogo = new Dog();

	*dogo = *j;

	std::cout << std::endl << dogo->getBrain()->arr[0] << std::endl;
	std::cout << dogo->getBrain()->arr[1] << std::endl << std::endl;

	j->getBrain()->arr[0] = "Dog brilliant idea";

	std::cout << std::endl << dogo->getBrain()->arr[0] << std::endl;
	std::cout << dogo->getBrain()->arr[1] << std::endl << std::endl;

	delete j;
	delete i;
	delete dogo;

	// HALF DOGS HALF CATS

	std::cout << std::endl << std::endl;

	Animal *arr[10];

	for (int i = 0; i < 10 ; i++)
	{
		std::cout << std::endl << std::endl;
		if (i % 2 == 0)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
		std::cout << std::endl << std::endl;
	}

	for (int j = 0;  j < 10; j++)
	{
		arr[j]->makeSound();
	}

	for (int k = 0;  k < 10; k++)
	{
		delete arr[k];
	}

    return (0);
}

