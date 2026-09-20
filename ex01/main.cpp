/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hal-lawa <hal-lawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:46:05 by hal-lawa          #+#    #+#             */
/*   Updated: 2026/09/20 12:08:59 by hal-lawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

int main()
{
    test_conical_form();
    std::cout << std::endl;
    test_grade_too_high_is_sign();
    std::cout << std::endl;
    test_grade_too_low_is_sign();
    std::cout << std::endl;
    test_too_high_exec();
    std::cout << std::endl;
    test_too_low_exec();
    std::cout << std::endl;
    test_sign_form_equal();
    std::cout << std::endl;
    test_sign_form_higher();
    std::cout << std::endl;
    test_sign_form_execption();
}