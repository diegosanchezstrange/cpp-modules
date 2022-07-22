#include "Bureaucrat.hpp"

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

void Bureaucrat::signForm(Form form)
{
    try
    {
        form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName();
	}
    catch (std::exception & err)
    {
        std::cout << this->name << " cannot sign " << form.getName() << " because " << err.what() << std::endl;
    }
}
