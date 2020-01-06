#pragma once 
#include <iostream>
#include <iomanip>
class conversion
{
private:
    std::string _number;
public:
    conversion();
    conversion(std::string number);
    virtual ~conversion();
    class conversionError : public std::exception
    {
        public:
        conversionError();
        virtual ~conversionError() throw();
        const char* what() const throw();
    };
    operator char();
    operator int();
    operator float();
    operator double();
};
