/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hal-lawa <hal-lawa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:45:59 by hal-lawa          #+#    #+#             */
/*   Updated: 2026/08/25 17:30:27 by hal-lawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return("grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return("grade too low");
}

Bureaucrat::Bureaucrat():_name("unnamed"), _grade(150)
{

}
Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade)
{
    if(_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other):
_name(other._name),
_grade(other._grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    if(this == &other)
        return(*this);
    _grade = other._grade;
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return(_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

void Bureaucrat::incBureaucrat()
{
    if(_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void Bureaucrat::decBureaucrat(){
    if(_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << _name <<" signed " << form.getName()<< std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout   << _name <<" couldn't sign " << form.getName()
                    << " because " << e.what() 
                    << std::endl;
    }
       
}

std::ostream &operator<<(std::ostream &os, const  Bureaucrat &b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade();
    return(os);
}