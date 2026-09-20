/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hal-lawa <hal-lawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:46:05 by hal-lawa          #+#    #+#             */
/*   Updated: 2026/09/20 12:33:07 by hal-lawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

int main()
{
    std::srand(std::time(0));
    test_conical_form_shrubbery();
    std::cout << std::endl;
    test_conical_form_robotomy();
    std::cout << std::endl;
    test_conical_form_presidential();
    std::cout << std::endl;
    test_execute_form_shrubbery_equal();
    std::cout << std::endl;
    test_execute_form_shrubbery_higher();
    std::cout << std::endl;
    test_execute_form_shrubbery_lower();
    std::cout << std::endl;
    test_execute_form_shrubbery_not_signed();
    std::cout << std::endl;
    test_execute_form_robotomy_equal();
    std::cout << std::endl;
    test_execute_form_robotomy_higher();
    std::cout << std::endl;
    test_execute_form_robotomy_lower();
    std::cout << std::endl;
    test_execute_form_robotomy_not_signed();
    std::cout << std::endl;
    test_execute_form_presidential_equal();
    std::cout << std::endl;
    test_execute_form_presidential_higher();
    std::cout << std::endl;
    test_execute_form_presidential_lower();
    std::cout << std::endl;
    test_execute_form_presidential_not_signed();
    return (0);
}