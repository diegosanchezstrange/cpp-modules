#include "Intern.hpp"

Intern::Intern() {}
Intern::~Intern() {}
Intern::Intern(const Intern &obj) { (void)obj; }
Intern &Intern::operator=(const Intern &obj) { (void)obj; return (*this); }

Form *Intern::makeForm(std::string form, std::string target)
{
	int			sol 		= -1;
	std::string names[] 	= {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form		*forms[] 	= {new ShrubberyCreationForm(target),
								new RobotomyRequestForm(target),
								new PresidentialPardonForm(target)};
	for (int i = 0; i < 3; i++)
	{
		if (names[i] == form)
			sol = i ;
		else
			delete forms[i];
	}
	if (sol == -1)
	{
		std::cout << "**ERROR UNKNOWN FORM**" << std::endl;
		return (NULL);
	}
	std::cout << "Inter creates " << form << std::endl;
	return (forms[sol]);
}
