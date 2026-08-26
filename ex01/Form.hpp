
#ifndef FORM_HPP
# define FORM_HPP

#include <exception>
#include <ostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _signGrade;
        const int _execGrade;
    
    public:
        Form();
        Form(std::string name, bool isSigned, int signGrade, int execGrade);
        Form(const Form &other);
        ~Form();
        Form& operator=(const Form &other);
        const std::string getName() const;
        bool getIsSigned() const;
        int getSignGrade() const;
        int getExecGrade() const;
        void beSigned(const Bureaucrat &b);
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream &os, const  Form &obj);

#endif