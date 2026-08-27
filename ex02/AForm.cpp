#include "AForm.hpp"

const char* AForm::GradeTooHighException::what() const throw()
{
    return("grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return("grade too low");
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return("form not signed");
}

AForm::AForm():_name("unnamed"), _isSigned(false), _signGrade(1), _execGrade(1)
{

}
AForm::AForm(std::string name, bool isSigned, int signGrade, int execGrade):
_name(name), 
_isSigned(isSigned),
_signGrade(signGrade),
_execGrade(execGrade)
{
    if (signGrade < 1 || execGrade < 1)
        throw AForm::GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &other):
_name(other._name), 
_isSigned(other._isSigned),
_signGrade(other._signGrade),
_execGrade(other._execGrade)
{
}

AForm::~AForm()
{
}

AForm& AForm::operator=(const AForm &other)
{
    if(this == &other)
        return(*this);
    _isSigned = other._isSigned;
    return (*this);
}

const std::string AForm::getName() const
{
    return (_name);
}
bool AForm::getIsSigned() const
{
    return (_isSigned);
}
int AForm::getSignGrade() const
{
    return (_signGrade);
}
int AForm::getExecGrade() const
{
    return (_execGrade);
}

void AForm::beSigned(const Bureaucrat &b)
{
    if(b.getGrade() > _signGrade)
        throw GradeTooLowException();
    _isSigned = true;
}

void AForm::execute(Bureaucrat const & executor) const
{
    if(getIsSigned() == false)
        throw AForm::FormNotSignedException();
    if(executor.getGrade() > getExecGrade())
        throw AForm::GradeTooLowException();
    specificExecute();
}

std::ostream &operator<<(std::ostream &os, const  AForm &obj)
{
    os  << obj.getName() 
        << ", IsSigned: " << obj.getIsSigned()
        << ", SignGrade: " << obj.getSignGrade()
        << ", ExecGrade: " << obj.getExecGrade();
    return(os);
}