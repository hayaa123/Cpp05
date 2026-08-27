
#ifndef SROBOTOMYREQUESTFORM_HPP
# define SROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm: public AForm
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &other);
        ~RobotomyRequestForm();
        RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
        virtual void specificExecute() const;
};


#endif