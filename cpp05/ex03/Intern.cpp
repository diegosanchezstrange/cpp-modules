//
// Created by diego on 10/15/22.
//

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &obj)
{
    (void) obj;
}

Intern &Intern::operator=(const Intern &obj){
    (void) obj;
    return (*this);
}

Form *Intern::makeForm(std::string form, std::string target)
{
    std::string names [3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form * forms [3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
    Form * sol = NULL;

    for (int i = 0; i < 3; ++i) {
        if (form == names[i])
            sol = forms[i];
        else
            delete forms[i];
    }
    if (sol != NULL)
        std::cout << "Intern creates " << form << std::endl;
    else
        std::cout << "Invalid form name" << std::endl;
    return (sol);
}
