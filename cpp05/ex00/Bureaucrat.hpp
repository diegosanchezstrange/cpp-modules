#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>

class Bureaucrat
{
private:
    const std::string   name;
    int                 grade;

public:
    Bureaucrat();
    Bureaucrat(std::string const &str, int grade);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const &obj);
    Bureaucrat &operator=(Bureaucrat const &obj);

    std::string getName(void) const;
    int getGrade(void) const;

    void        incrementGrade();
    void        decrementGrade();

    class GradeTooHighException: public std::exception
    {
    public:
        GradeTooHighException(){}
        virtual ~GradeTooHighException() throw() {}

        virtual const char * what() const throw()
        {
            return "Grade too High";
        };
    };

    class GradeTooLowException: public std::exception
    {
    public:
        GradeTooLowException() {}
        virtual ~GradeTooLowException() throw() {}

        virtual const char * what() const throw()
        {
            return "Grade too low";
        };
    };
};

std::ostream & operator<<(std::ostream &out, const Bureaucrat& bur);

#endif //BUREAUCRAT_H
