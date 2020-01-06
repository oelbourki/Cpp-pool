#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Form *Intern::makeForm(std::string form,std::string target)
{
    if (form == "shrubbery creation" || form == "Shrubbery Creation")
    {
        std::cout << "intern creates form" << std::endl;
        return (new ShrubberyCreationForm(target));
    }
    else if (form == "robotomy request" || form == "Robotomy Request")
    {
        std::cout << "intern creates form" << std::endl;
        return (new RobotomyRequestForm(target));
    }
    else if (form == "presidential pardon" || form == "Presidential Pardon")
    {
        std::cout << "intern creates form" << std::endl;
        return (new PresidentialPardonForm(target));
    }
    else
    {
        std::cout << "intern fails to creat" << std::endl;
    }
    
    return NULL;
}