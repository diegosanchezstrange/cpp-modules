#include <iostream>
#include <cstdlib>
#include <time.h>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate()
{
    int random = std::rand() % 101;
	if (random < 33)
		return (new A);
	else if (random > 33 && random < 66)
		return (new B);
	else if (random > 66)
		return (new C);
	return (new C);
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
    try
    {
        Base & a = dynamic_cast<A&>(p);
        (void) a;
        std::cout << "A" << std::endl;
    }
    catch (std::exception & err){}
    try
    {
        Base & b = dynamic_cast<B&>(p);
        (void) b;
        std::cout << "B" << std::endl;
    }
    catch (std::exception & err){}
    try
    {
        Base & c = dynamic_cast<C&>(p);
        (void) c;
        std::cout << "C" << std::endl;
    }
    catch (std::exception & err){}
}


int	main()
{
    srand(time(NULL));
    Base * test = generate();
    Base * test1 = generate();
    Base & test2 = *generate();
    Base & test3 = *generate();

    identify(test);
    identify(test1);
    identify(test2);
    identify(test3);

    delete test;
    delete test1;
	return (0);
}
