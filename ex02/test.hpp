/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hal-lawa <hal-lawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 12:27:20 by hal-lawa          #+#    #+#             */
/*   Updated: 2026/09/20 12:28:37 by hal-lawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
# define TEST_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

void test_conical_form_shrubbery();
void test_conical_form_robotomy();
void test_conical_form_presidential();
void test_execute_form_shrubbery_equal();
void test_execute_form_robotomy_equal();
void test_execute_form_presidential_equal();
void test_execute_form_shrubbery_lower();
void test_execute_form_robotomy_lower();
void test_execute_form_presidential_lower();
void test_execute_form_shrubbery_higher();
void test_execute_form_robotomy_higher();
void test_execute_form_presidential_higher();
void test_execute_form_shrubbery_not_signed();
void test_execute_form_robotomy_not_signed();
void test_execute_form_presidential_not_signed();

#endif
