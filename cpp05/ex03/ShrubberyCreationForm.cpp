//
// Created by diego on 22/6/22.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("ShrubberyCreationForm", 145, 137)
{}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: Form("ShrubberyCreationForm", 145, 137)
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

void ShrubberyCreationForm::executeForm() const
{
	std::string file_name = this->target + "_shrubbery";
    std::ofstream file (file_name.c_str(), std::ofstream::out);
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
