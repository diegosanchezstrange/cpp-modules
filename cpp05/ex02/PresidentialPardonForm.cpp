//
// Created by diego on 22/6/22.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: Form("PresidentialPardonForm", 145, 137)
{}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
: Form("PresidentialPardonForm", 145, 137)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj): Form(obj.getName(), obj.getGradeToSign(), obj.getGradeToExecute())
{
    this->target = obj.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    Form::operator=(obj);
    this->target = obj.target;
    return (*this);
}

void PresidentialPardonForm::executeForm() const
{
    std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
