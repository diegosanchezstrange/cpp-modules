#include "Brain.h"

Brain::Brain() {}

Brain::~Brain() {}

Brain::Brain(const Brain &obj)
{
    this->arr = obj.arr;
}

Brain &Brain::operator=(const Brain &obj)
{
    this->arr = obj.arr;
    return (*this);
}
