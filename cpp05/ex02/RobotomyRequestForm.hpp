#pragma once 
#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    virtual ~RobotomyRequestForm();
    void    execute(Bureaucrat const & executor) const;
};