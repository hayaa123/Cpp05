#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm():
AForm("roboto my request form", false, 72, 45)
{

}
RobotomyRequestForm::RobotomyRequestForm(std::string target):
AForm("roboto my request form", false, 72, 45),
_target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):
AForm(other)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::specificExecute() const
{

    std::cout << "DZZZZZzZZzZZZZzZZZZZ" << std::endl;
    if(rand() % 2)
        std::cout << _target << " has been robotomized successfully." << std::endl; 
    else
        std::cout << "robotomy failed." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if(this == &other)
        return(*this);
    AForm::operator=(other);
    return (*this);
}
