#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include <fstream>

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	std::string target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &obj);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);

    void execute(Bureaucrat const & executor) const;
};


#endif //PRESIDENTIALPARDONFORM_H
