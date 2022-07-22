#include "Form.hpp"

Form::Form(): name("form"), gradeToSign(150), gradeToExecute(150){}

Form::~Form() {}

Form::Form(const Form &obj): name(obj.name), gradeToSign(obj.gradeToSign), gradeToExecute(obj.gradeToExecute)
{
    if (this->gradeToExecute > 150 || this->gradeToSign > 150)
        throw(Form::GradeTooLowException());
    if (this->gradeToExecute < 1 || this->gradeToSign < 1)
        throw(Form::GradeTooHighException());
    this->isSigned = obj.getIsSigned();
}

Form &Form::operator=(const Form &obj)
{
    this->isSigned = obj.getIsSigned();
    return (*this);
}

Form::Form(const std::string &str, int gradeToSign, int gradeToExecute): name(str), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (this->gradeToExecute > 150 || this->gradeToSign > 150)
        throw(Form::GradeTooLowException());
    if (this->gradeToExecute < 1 || this->gradeToSign < 1)
        throw(Form::GradeTooHighException());
    this->isSigned = false;
}

void Form::beSigned(Bureaucrat bur)
{
    if (bur.getGrade() <= this->gradeToSign)
        this->isSigned = true;
    else
        throw(GradeTooLowException());
}

std::string Form::getName() const { return (this->name); }

int Form::getGradeToExecute() const { return (this->gradeToExecute); }

int Form::getGradeToSign() const { return (this->gradeToSign); }

bool Form::getIsSigned() const { return (this->isSigned); }
