#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <iostream>
#include <fstream>

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	std::string target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &obj);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &obj);

    void executeForm() const;
};


#endif //ROBOTOMYREQUESTFORM_H
