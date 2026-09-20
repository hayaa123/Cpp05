/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hal-lawa <hal-lawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 12:13:21 by hal-lawa          #+#    #+#             */
/*   Updated: 2026/09/20 12:13:22 by hal-lawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

void test_conical_form()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test conical form" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b1;
        Bureaucrat b2("name", 50);
        Bureaucrat b3 = b1;

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << b3 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_grade_too_high()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test grade too high" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b2("name", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_grade_too_low()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test grade too low" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b2("name", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_inc_grade_normal()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test increase grade normal" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b2("name", 50);
        std::cout << "before increasing grade: "<< std::endl << b2 << std::endl;
        b2.incBureaucrat();
        std::cout << "after increasing grade: " << std::endl << b2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_inc_exception()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test increase grade exception" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b2("name", 1);
        std::cout << "before increasing grade: " << std::endl << b2 << std::endl;
        b2.incBureaucrat();
        std::cout << "after increasing grade: " << std::endl << b2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_dec_grade_normal()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test decrease grade normal" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b2("name", 50);
        std::cout << "before decreasing grade: " << std::endl << b2 << std::endl;
        b2.decBureaucrat();
        std::cout << "after decreasing grade: " << std::endl << b2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_dec_exception()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test decrease grade exception" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b2("name", 150);
        std::cout << "before decreasing grade: " << std::endl << b2 << std::endl;
        b2.decBureaucrat();
        std::cout << "after decreasing grade: " << std::endl << b2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
