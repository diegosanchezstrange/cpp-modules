#ifndef FORM_H
#define FORM_H

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string    name;
    bool                isSigned;
    const int           gradeToSign;
    const int           gradeToExecute;
public:
    Form();
    Form(std::string const &str, int gradeToSign, int gradeToExecute);
    ~Form();
    Form(Form const &obj);
    Form &operator=(Form const &obj);

    std::string getName(void) const;
    bool        getIsSigned(void) const;
    int         getGradeToSign(void) const;
    int         getGradeToExecute(void) const;

    void        beSigned(Bureaucrat bur);

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

std::ostream & operator<<(std::ostream &out, const Form& form);

#endif //FORM_H
