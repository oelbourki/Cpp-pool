#pragma once 
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
class PresidentialPardonForm : public Form
{
    public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    virtual ~PresidentialPardonForm();
    void    execute(Bureaucrat const & executor) const;
};