/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hal-lawa <hal-lawa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:46:05 by hal-lawa          #+#    #+#             */
/*   Updated: 2026/08/26 17:45:49 by hal-lawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(0));

    Bureaucrat manager("Manager", 70);
    Bureaucrat intern("Intern", 150);
    Bureaucrat director("Director", 1);
    ShrubberyCreationForm shrubbery("home");
    RobotomyRequestForm robotomy("Bender");
    PresidentialPardonForm pardon("Arthur Dent");

    std::cout << "--- Shrubbery creation form ---" << std::endl;
    manager.signForm(shrubbery);
    manager.executeForm(shrubbery);

    std::cout << "--- Robotomy request form ---" << std::endl;
    manager.signForm(robotomy);
    manager.executeForm(robotomy);
    director.executeForm(robotomy);
    director.executeForm(robotomy);
    director.executeForm(robotomy);

    std::cout << "--- Presidential pardon form ---" << std::endl;
    director.signForm(pardon);
    director.executeForm(pardon);

    std::cout << "--- Unsigned form ---" << std::endl;
    intern.executeForm(pardon);
}