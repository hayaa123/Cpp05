#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern &other)
{
    (void) other;
}
Intern::~Intern()
{

}
Intern& Intern::operator=(const Intern &other)
{
    (void) other;
    return (*this);
}

static FormType getType(std::string name)
{
    if(name == "shrubbery creation")
        return (ShrubberyCreation);
    if(name == "robotomy request")
        return (RobotomyRequest);
    if(name == "presedential Pardon")
        return (PresidentialPardon);
    return (Unknown);
}

AForm *Intern::makeForm(std::string name, std::string target) const
{
    FormType type;
    AForm   *form;
    type = getType(name);

    switch (type)
    {
    case ShrubberyCreation:
        form = new ShrubberyCreationForm(target);
        break;
    case RobotomyRequest:
        form = new RobotomyRequestForm(target);
        break;
    case PresidentialPardon:
        form = new PresidentialPardonForm(target);
        break;
    default:
        std::cout << "The provided form name does not exist." << std::endl;
        return (NULL);
    }
    std::cout << "Intern creates " << form->getName() << std::endl;
    return (form);
}