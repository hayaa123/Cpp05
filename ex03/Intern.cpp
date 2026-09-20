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

AForm *createShrubbery(std::string target)
{
    return(new ShrubberyCreationForm(target));
}

AForm *createRobotomy(std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm *createPresidentialPardon(std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string name, std::string target) const
{
    t_form_info forms_info[] = {
        {"shrubbery creation", createShrubbery},
        {"robotomy request", createRobotomy},
        {"presidential pardon", createPresidentialPardon}
    };
    int form_size = 3;

    for(int i=0; i < form_size; i++)
    {
        if(name == forms_info[i].name)
        {
            std::cout << "Intern creates " << forms_info[i].name << std::endl;
            return (forms_info[i].create(target));
        }
    }
    std::cout << "The provided name does not exist" << std::endl;
    return (NULL);
}

std::ostream &operator<<(std::ostream &os, const Intern &obj)
{
    (void)obj;
    os << "Intern :D";
    return (os);
}