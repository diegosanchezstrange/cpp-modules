#include "Bureaucrat.h"

int main(void)
{
    Bureaucrat test("pepe", 42);
	Form		form("B34", 12, 42);

    std::cout << test << std::endl;

    try 
    {
		test.signForm(form);
    }
    catch (std::exception & err) {
        std::cout << "ERROR" << std::endl;
    }

    return (0);
}
