#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    Bureaucrat test("pepe", 42);
    PresidentialPardonForm formPresi("Diegas");
    ShrubberyCreationForm formShrubbery("Diegas");
    RobotomyRequestForm formRobotomy("Diegas");

    std::cout << test << std::endl;
    std::cout << formPresi << std::endl;
    std::cout << formShrubbery << std::endl;
    std::cout << formRobotomy << std::endl;

    try
    {
		test.signForm(formPresi);
        test.executeForm(formPresi);
    }
    catch (std::exception & err) {
        std::cout << "ERROR" << std::endl;
    }

    return (0);
}
