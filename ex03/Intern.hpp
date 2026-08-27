#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

enum FormType{
    ShrubberyCreation,
    RobotomyRequest,
    PresidentialPardon,
    Unknown
};

class Intern
{
    public:
        Intern();
        Intern(const Intern &other);
        ~Intern();
        Intern& operator=(const Intern &other);
        AForm *makeForm(std::string name, std::string target) const;
};

#endif