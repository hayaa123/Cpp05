/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hal-lawa <hal-lawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 12:13:46 by hal-lawa          #+#    #+#             */
/*   Updated: 2026/09/21 13:53:46 by hal-lawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <exception>
#include <ostream>
#include <iostream>
#include <string>

class AForm;

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &other);
        ~Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat &other);
        std::string getName() const;
        int getGrade() const;
        void incBureaucrat();
         void decBureaucrat();
        void signForm(AForm &form) const;
        void executeForm(AForm const & form) const;
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};


std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif