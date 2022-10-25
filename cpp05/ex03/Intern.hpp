#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

    Intern();
    ~Intern();
    Intern(Intern const &obj);
    Intern &operator=(Intern const &obj);

    Form * makeForm(std::string form, std::string target);
};


#endif //INTERN_HPP
