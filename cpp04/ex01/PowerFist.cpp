#include "PowerFist.hpp"


PowerFist::PowerFist(const PowerFist &a)
{
    this->name = a.getName();
    this->ap = a.getAPCost();
    this->damage = a.getDamage();
}
PowerFist::PowerFist()
{
    this->name = "Power Fist";
    this->ap = 8;
    this->damage = 50;
}
PowerFist::~PowerFist()
{
    return;
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist &PowerFist::operator=(const PowerFist &a)
{
    return const_cast<PowerFist&>(a);
}