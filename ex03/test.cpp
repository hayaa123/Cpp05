#include "test.hpp"

void test_conical_form()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test conical form" << std::endl;
    std::cout << "-------------------------------------" << std::endl;

    Intern intern;
    Intern intern2(intern);
    Intern intern3 = intern2;
    std::cout << intern << std::endl;
    std::cout << intern2 << std::endl;
    std::cout << intern3 << std::endl;
}

void test_create_shrubbery_form()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test create shrubbery form" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Intern intern;
        AForm *form = intern.makeForm("shrubbery creation", "home");
        if(form != NULL)
        {
            std::cout << "Created form: " << std::endl << *form << std::endl;
            delete form;
        }
        else
        {
            std::cout << "Form creation failed." << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_create_robotomy_form()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test create robotomy form" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Intern intern;
        AForm *form = intern.makeForm("robotomy request", "Bender");
        if(form != NULL)
        {
            std::cout << "Created form: " << std::endl << *form << std::endl;
            delete form;
        }
        else
        {
            std::cout << "Form creation failed." << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_create_presidential_form()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test create presidential form" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Intern intern;
        AForm *form = intern.makeForm("presidential pardon", "Alice");
        if(form != NULL)
        {
            std::cout << "Created form: " << std::endl << *form << std::endl;
            delete form;
        }
        else
        {
            std::cout << "Form creation failed." << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test_create_invalid_form()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "test create invalid form" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    try
    {
        Intern intern;
        AForm *form = intern.makeForm("aaa", "target");
        if(form != NULL)
        {
            std::cout << "Created form: " << std::endl << *form << std::endl;
            delete form;
        }
        else
        {
            std::cout << "Form creation failed." << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}