#include <iostream>
#include "Human.hpp"


Human::Human()
{
}

Human::~Human()
{
}

std::string    Human::identify() const
{
    return this->einstein.identify();
}

const Brain& Human::getBrain() const
{
    return this->einstein;
}