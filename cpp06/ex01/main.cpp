#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data * example = new Data(42);

	uintptr_t num = serialize(example);

	Data * example2 = deserialize(num);

	std::cout << example2->x << std::endl;

	return (0);
}
