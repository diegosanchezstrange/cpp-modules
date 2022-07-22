#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Default Brain deconstructor called." << std::endl;
}

Brain::Brain(const Brain &obj)
{
	for (long unsigned int i = 0; i < obj.arr->size(); i++)
		this->arr[i] = obj.arr[i];
}

Brain &Brain::operator=(const Brain &obj)
{
	for (long unsigned int i = 0; i < obj.arr->size(); i++)
		this->arr[i] = obj.arr[i];
    return (*this);
}
