#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef struct s_form_info{
    std::string name;
    AForm *(*create)(std::string);
} t_form_info;

class Intern
{
    public:
        Intern();
        Intern(const Intern &other);
        ~Intern();
        Intern& operator=(const Intern &other);
        AForm *makeForm(std::string name, std::string target) const;
};


std::ostream &operator<<(std::ostream &os, const Intern &obj);

#endif