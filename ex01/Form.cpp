#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw()
{
    return("grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return("grade too low");
}

Form::Form():_name("unnamed"), _isSigned(false), _signGrade(1), _execGrade(1)
{

}
Form::Form(std::string name, bool isSigned, int signGrade, int execGrade):
_name(name), 
_isSigned(isSigned),
_signGrade(signGrade),
_execGrade(execGrade)
{
    if (signGrade < 1 || execGrade < 1)
        throw Form::GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &other):
_name(other._name), 
_isSigned(other._isSigned),
_signGrade(other._signGrade),
_execGrade(other._execGrade)
{
}

Form::~Form()
{
}

Form& Form::operator=(const Form &other)
{
    if(this == &other)
        return(*this);
    _isSigned = other._isSigned;
    return (*this);
}

const std::string Form::getName() const
{
    return (_name);
}
bool Form::getIsSigned() const
{
    return (_isSigned);
}
int Form::getSignGrade() const
{
    return (_signGrade);
}
int Form::getExecGrade() const
{
    return (_execGrade);
}

void Form::beSigned(const Bureaucrat &b)
{
    if(b.getGrade() > _signGrade)
        throw GradeTooLowException();
    _isSigned = true;
}   

std::ostream &operator<<(std::ostream &os, const  Form &obj)
{
    os  << obj.getName() 
        << ", IsSigned: " << obj.getIsSigned()
        << ", SignGrade: " << obj.getSignGrade()
        << ", ExecGrade: " << obj.getExecGrade();
    return(os);
}