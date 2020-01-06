#include "RadScorpion.hpp"


RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}
RadScorpion::RadScorpion()
{
    std::cout << "* click click click *" << std::endl;
    this->hp = 80;
    this->type = "RadScorpion";
}

RadScorpion::RadScorpion(RadScorpion const &a)
{
    *this = a;
    std::cout << "* click click click *" << std::endl;
}
RadScorpion &RadScorpion::operator=(RadScorpion const &a)
{
    return const_cast<RadScorpion&>(a);
}
