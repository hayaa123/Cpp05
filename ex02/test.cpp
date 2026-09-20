/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hal-lawa <hal-lawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 12:14:09 by hal-lawa          #+#    #+#             */
/*   Updated: 2026/09/20 12:29:36 by hal-lawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

void test_conical_form_shrubbery()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test conical form shrubbery" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        ShrubberyCreationForm s1;
        ShrubberyCreationForm s2("target");
        ShrubberyCreationForm s3 = s1;
        ShrubberyCreationForm s4(s2);
        std::cout <<"f1:" << std::endl << s1 << std::endl;
        std::cout <<"f2:" << std::endl << s2 << std::endl;
        std::cout <<"f3:" << std::endl << s3 << std::endl;
        std::cout <<"f4:" << std::endl << s4 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_conical_form_robotomy()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test conical form robotomy" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        RobotomyRequestForm r1;
        RobotomyRequestForm r2("target");
        RobotomyRequestForm r3 = r1;
        RobotomyRequestForm r4(r2);
        std::cout <<"f1:" << std::endl << r1 << std::endl;
        std::cout <<"f2:" << std::endl << r2 << std::endl;
        std::cout <<"f3:" << std::endl << r3 << std::endl;
        std::cout <<"f4:" << std::endl << r4 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_conical_form_presidential()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test conical form presidential" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        PresidentialPardonForm p1;
        PresidentialPardonForm p2("target");
        PresidentialPardonForm p3 = p1;
        PresidentialPardonForm p4(p2);
        std::cout <<"f1:" << std::endl << p1 << std::endl;
        std::cout <<"f2:" << std::endl << p2 << std::endl;
        std::cout <<"f3:" << std::endl << p3 << std::endl;
        std::cout <<"f4:" << std::endl << p4 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_execute_form_shrubbery_equal()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test execute form shrubbery equal" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b("b", 137);
        Bureaucrat b2("b2", 50);
        AForm *f = new ShrubberyCreationForm("target");
        b2.signForm(*f);
        std::cout << "Exec Bureaucrat :" << std::endl << b << std::endl;
        std::cout << "form before executing: " << std::endl << *f << std::endl;
        b.executeForm(*f);
        free(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_execute_form_shrubbery_higher()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test execute form shrubbery higher" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b("b", 50);
        Bureaucrat b2("b2", 30);
        AForm *f = new ShrubberyCreationForm("target");
        b2.signForm(*f);
        std::cout << "Exec Bureaucrat :" << std::endl << b << std::endl;
        std::cout << "form before executing: " << std::endl << *f << std::endl;
        b.executeForm(*f);
        free(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_execute_form_shrubbery_lower()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test execute form shrubbery lower" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b("b", 150);
        Bureaucrat b2("b2", 50);
        AForm *f = new ShrubberyCreationForm("target");
        b2.signForm(*f);
        std::cout << "Exec Bureaucrat :" << std::endl << b << std::endl;
        std::cout << "form before executing: " << std::endl << *f << std::endl;
        b.executeForm(*f);
        free(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_execute_form_shrubbery_not_signed()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test execute form shrubbery not signed" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b("b", 50);
        AForm *f = new ShrubberyCreationForm("target");
        std::cout << "Exec Bureaucrat :" << std::endl << b << std::endl;
        std::cout << "form before executing: " << std::endl << *f << std::endl;
        b.executeForm(*f);
        free(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_execute_form_robotomy_equal()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test execute form robotomy equal" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b("b", 45);
        Bureaucrat b2("b2", 50);
        AForm *f = new RobotomyRequestForm("target");
        b2.signForm(*f);
        std::cout << "Exec Bureaucrat :" << std::endl << b << std::endl;
        std::cout << "form before executing: " << std::endl << *f << std::endl;
        b.executeForm(*f);
        free(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_execute_form_robotomy_higher()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test execute form robotomy higher" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b("b", 30);
        Bureaucrat b2("b2", 50);
        AForm *f = new RobotomyRequestForm("target");
        b2.signForm(*f);
        std::cout << "Exec Bureaucrat :" << std::endl << b << std::endl;
        std::cout << "form before executing: " << std::endl << *f << std::endl;
        b.executeForm(*f);
        free(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_execute_form_robotomy_lower()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test execute form robotomy lower" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b("b", 150);
        Bureaucrat b2("b2", 50);
        AForm *f = new RobotomyRequestForm("target");
        b2.signForm(*f);
        std::cout << "Exec Bureaucrat :" << std::endl << b << std::endl;
        std::cout << "form before executing: " << std::endl << *f << std::endl;
        b.executeForm(*f);
        free(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_execute_form_robotomy_not_signed()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test execute form robotomy not signed" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b("b", 50);
        AForm *f = new RobotomyRequestForm("target");
        std::cout << "Exec Bureaucrat :" << std::endl << b << std::endl;
        std::cout << "form before executing: " << std::endl << *f << std::endl;
        b.executeForm(*f);
        free(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_execute_form_presidential_equal()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test execute form presidential equal" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b("b", 5);
        Bureaucrat b2("b2", 10);
        AForm *f = new PresidentialPardonForm("target");
        b2.signForm(*f);
        std::cout << "Exec Bureaucrat :" << std::endl << b << std::endl;
        std::cout << "form before executing: " << std::endl << *f << std::endl;
        b.executeForm(*f);
        free(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_execute_form_presidential_higher()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test execute form presidential higher" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b("b", 1);
        Bureaucrat b2("b2", 10);
        AForm *f = new PresidentialPardonForm("target");
        b2.signForm(*f);
        std::cout << "Exec Bureaucrat :" << std::endl << b << std::endl;
        std::cout << "form before executing: " << std::endl << *f << std::endl;
        b.executeForm(*f);
        free(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_execute_form_presidential_lower()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test execute form presidential lower" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b("b", 150);
        Bureaucrat b2("b2", 10);
        AForm *f = new PresidentialPardonForm("target");
        b2.signForm(*f);
        std::cout << "Exec Bureaucrat :" << std::endl << b << std::endl;
        std::cout << "form before executing: " << std::endl << *f << std::endl;
        b.executeForm(*f);
        free(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_execute_form_presidential_not_signed()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test execute form presidential not signed" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Bureaucrat b("b", 10);
        AForm *f = new PresidentialPardonForm("target");
        std::cout << "Exec Bureaucrat :" << std::endl << b << std::endl;
        std::cout << "form before executing: " << std::endl << *f << std::endl;
        b.executeForm(*f);
        free(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}