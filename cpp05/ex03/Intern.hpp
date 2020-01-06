#pragma once 
#include "Form.hpp"

class Intern
{
public:
    Intern(/* args */);
    virtual ~Intern();
    Form *makeForm(std::string form,std::string target);
};
