#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string &str, int grade): name(str)
{
    if (grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    if (grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    this->grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &obj): name(obj.name)
{
    if (grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    if (grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    this->grade = obj.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    this->grade = obj.grade;
    return (*this);
}

std::string Bureaucrat::getName(void) const { return (this->name); }

int Bureaucrat::getGrade(void) const { return (this->grade); }

void Bureaucrat::incrementGrade()
{
    if (this->grade == 1)
        throw(Bureaucrat::GradeTooHighException());
    this->grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->grade == 150)
        throw(Bureaucrat::GradeTooLowException());
    this->grade++;
}

std::ostream & operator<<(std::ostream &out, const Bureaucrat& bur)
{
    out << bur.getName() << " has grade : " << bur.getGrade();
    return (out);
}
