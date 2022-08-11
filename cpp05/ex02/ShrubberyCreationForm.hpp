#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include <fstream>

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	std::string target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string const &target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &obj);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);

    void execute(Bureaucrat const & executor) const;
};


#endif //SHRUBBERYCREATIONFORM_H
