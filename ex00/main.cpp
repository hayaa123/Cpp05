/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hal-lawa <hal-lawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:46:05 by hal-lawa          #+#    #+#             */
/*   Updated: 2026/09/20 12:08:33 by hal-lawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

int main()
{
    test_conical_form();
    std::cout << std::endl;
    test_grade_too_high();
    std::cout << std::endl;
    test_grade_too_low();
    std::cout << std::endl;
    test_inc_grade_normal();
    std::cout << std::endl;
    test_inc_exception();
    std::cout << std::endl;
    test_dec_grade_normal();
    std::cout << std::endl;
    test_dec_exception();
    return (0);
}