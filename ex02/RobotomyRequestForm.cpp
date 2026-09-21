/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hal-lawa <hal-lawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 12:13:56 by hal-lawa          #+#    #+#             */
/*   Updated: 2026/09/21 11:35:33 by hal-lawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm():
AForm("robotomy request form", false, 72, 45)
{

}
RobotomyRequestForm::RobotomyRequestForm(std::string target):
AForm("robotomy request form", false, 72, 45),
_target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):
AForm(other)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    validateExecution(executor);
    std::cout << "DZZZZZzZZzZZZZzZZZZZ" << std::endl;
    if(rand() % 2)
        std::cout << _target << " has been robotomized successfully." << std::endl; 
    else
        std::cout << "robotomy failed." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if(this == &other)
        return(*this);
    AForm::operator=(other);
    return (*this);
}
