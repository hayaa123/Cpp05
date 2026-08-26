/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hal-lawa <hal-lawa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:46:05 by hal-lawa          #+#    #+#             */
/*   Updated: 2026/08/24 17:46:08 by hal-lawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("CEO", 1);
        Bureaucrat b("Manager", 3);
        Bureaucrat c("Intern", 150);
        std::cout << c << std::endl;
        b.incBureaucrat();
        std::cout << b << std::endl;
        c.decBureaucrat();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}