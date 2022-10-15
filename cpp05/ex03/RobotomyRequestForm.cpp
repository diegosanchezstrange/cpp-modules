//
// Created by diego on 22/6/22.
//

#include "RobotomyRequestForm.hpp"
#include <time.h>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
: Form("RobotomyRequestForm", 72, 45)
{}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: Form("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj): Form(obj.getName(), obj.getGradeToSign(), obj.getGradeToExecute())
{
    this->target = obj.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    Form::operator=(obj);
    this->target = obj.target;
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    int random;

    (void) executor;
    std::cout << "** DRILLING NOISES **" << std::endl;
    srand(time(NULL));
    random = std::rand() % 101;
    std::cout << random << std::endl;
    if (random >= 50)
        std::cout << this->target << " has been successfully robotomized :)." << std::endl;
    else
        std::cout << this->target << " robotomization failed :(." << std::endl;

}
