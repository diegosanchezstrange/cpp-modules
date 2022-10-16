#include <iostream>
#include <cstdlib>
#include <time.h>

class Base 
{
	public:
		virtual ~Base()
		{
			std::cout << "Base destructor" << std::endl;
		}
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base	*generate()
{
	srand(time(NULL));
    int random = std::rand() % 101;
	if (random < 33)
		return (new A());
	else if (random > 33 && random < 66)
		return (new B());
	else if (random > 66)
		return (new C());
	return (new C());
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;

}

void identify(Base &p)
{
}


int	main()
{
	return (0);
}
