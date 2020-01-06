#pragma once 
#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    virtual ~ShrubberyCreationForm();
    void    execute(Bureaucrat const & executor) const;
};