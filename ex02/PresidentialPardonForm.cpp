/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hal-lawa <hal-lawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 12:13:52 by hal-lawa          #+#    #+#             */
/*   Updated: 2026/09/20 12:13:53 by hal-lawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm():
AForm("presidential pardon form", false, 25, 5)
{

}
PresidentialPardonForm::PresidentialPardonForm(std::string target):
AForm("presidential pardon form", false, 25, 5),
_target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other):
AForm(other)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::specificExecute() const
{
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if(this == &other)
        return(*this);
    AForm::operator=(other);
    return (*this);
}
