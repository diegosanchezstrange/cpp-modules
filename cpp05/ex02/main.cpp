#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    Bureaucrat test("pepe", 42);
	ShrubberyCreationForm form("tree");

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
