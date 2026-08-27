
#ifndef AFORM_HPP
# define AFORM_HPP

#include <exception>
#include <ostream> 
#include <string>
#include "Bureaucrat.hpp"

class AForm
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _signGrade;
        const int _execGrade;
    
    protected:
        virtual void specificExecute() const = 0;
    public:
        AForm();
        AForm(std::string name, bool isSigned, int signGrade, int execGrade);
        AForm(const AForm &other);
        virtual ~AForm();
        AForm& operator=(const AForm &other);
        const std::string getName() const;
        bool getIsSigned() const;
        int getSignGrade() const;
        int getExecGrade() const;
        void beSigned(const Bureaucrat &b);
        void execute(Bureaucrat const & executor) const;
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
        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream &os, const  AForm &obj);

#endif