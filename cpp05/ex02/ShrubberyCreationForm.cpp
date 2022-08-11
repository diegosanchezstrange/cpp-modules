//
// Created by diego on 22/6/22.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): Form("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj): Form(obj.getName(), obj.getGradeToSign(), obj.getGradeToExecute())
{
    this->target = obj.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    Form::operator=(obj);
    this->target = obj.target;
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if (!this->getIsSigned())
        throw (Form::FormNotSignedException());
    if (executor.getGrade() > this->getGradeToExecute())
        throw (Form::GradeTooLowException());
    std::ofstream file (this->target + "_shrubbery", std::ofstream::out);
    std::cout << "Creating a ASCII tree." << std::endl;

    file
    <<           "v .   ._, |_  .,"         << std::endl
    <<       "`-._\\/  .  \\ /    |/_"        << std::endl
    <<            "\\\\  _\\, y | \\//"         << std::endl
    <<      "_\\_.___\\, \\/ -.\\||"          << std::endl
    <<        "`7-,--.`._||  / / ,"         << std::endl
    <<        "/'     `-. `./ / |/_.'"      << std::endl
    <<                 "|    |//"           << std::endl
    <<                 "|_    /"            << std::endl
    <<                 "|-   |"             << std::endl
    <<                 "|   =|"             << std::endl
    <<                 "|    |"             << std::endl <<
  "--------------------/ ,  . \\--------._"  << std::endl;
}
