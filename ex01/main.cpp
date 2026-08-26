/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hal-lawa <hal-lawa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:46:05 by hal-lawa          #+#    #+#             */
/*   Updated: 2026/08/25 17:33:26 by hal-lawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

    Form form("Tax form", false, 25, 30);
    Bureaucrat manager("Manager", 25);
    Bureaucrat intern("Intern", 100);

    std::cout << form << std::endl;

    std::cout << "Manager tries to sign: ";
    manager.signForm(form);
    
    std::cout << form << std::endl;

    std::cout << "Intern tries to sign: ";
    intern.signForm(form);
    return (0);
}