/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hal-lawa <hal-lawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 12:12:49 by hal-lawa          #+#    #+#             */
/*   Updated: 2026/09/20 12:12:50 by hal-lawa         ###   ########.fr       */
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
        Form f1;
        Form f2("name", false, 50, 50);
        Form f3 = f1;
        Form f4(f2);
        std::cout <<"f1:" << std::endl << f1 << std::endl;
        std::cout <<"f2:" << std::endl << f2 << std::endl;
        std::cout <<"f3:" << std::endl << f3 << std::endl;
        std::cout <<"f4:" << std::endl << f4 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_grade_too_high_is_sign()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test grade too high is sign" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Form f2("name", false, 0, 50);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_grade_too_low_is_sign()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test grade too low is sign" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Form f2("name", false, 151, 50);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_too_high_exec()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test grade too high exec" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Form f2("name", false, 50, 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_too_low_exec()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test grade too low exec" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Form f2("name", false, 50, 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_sign_form_equal()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test sign form equal" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b("b1", 50);
        Form f("name", false, 50, 50);
        std::cout << "Bureaucrat :" << std::endl << b << std::endl;
        std::cout << "form before signing: " << std::endl << f << std::endl;
        b.signForm(f);
        std::cout << "form after signing: " << std::endl << f << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_sign_form_higher()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test sign form higher" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b("b1", 30);
        Form f("name", false, 50, 50);
        std::cout << "Bureaucrat :" << std::endl << b << std::endl;
        std::cout << "form before signing: " << std::endl << f << std::endl;
        b.signForm(f);
        std::cout << "form after signing: " << std::endl << f << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_sign_form_execption()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test sign form execption" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b("b1", 51);
        Form f("name", false, 50, 50);
        std::cout << "Bureaucrat :" << std::endl << b << std::endl;
        std::cout << "form before signing: " << std::endl << f << std::endl;
        b.signForm(f);
        std::cout << "form after signing: " << std::endl << f << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}




