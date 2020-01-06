#pragma once 

class Base
{
public:
    virtual ~Base();
};


Base * generate(void);
void identify_from_pointer(Base * p);
void identify_from_reference( Base & p);
