#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    Bureaucrat test("pepe", 42);
    PresidentialPardonForm form("Diegas");

    std::cout << test << std::endl;

    try
    {
		test.signForm(form);
        test.executeForm(form);
    }
    catch (std::exception & err) {
        std::cout << "ERROR" << std::endl;
    }

    return (0);
}
