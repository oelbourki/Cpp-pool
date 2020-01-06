#include "PlasmaRifle.hpp"


PlasmaRifle::PlasmaRifle(PlasmaRifle const &a)
{
    this->name = a.getName();
    this->ap = a.getAPCost();
    this->damage = a.getDamage();
}
PlasmaRifle::PlasmaRifle()
{
    this->name = "PlasmaRifle Rifle";
    this->ap = 5;
    this->damage = 21;
}
PlasmaRifle::~PlasmaRifle()
{
    return;
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
