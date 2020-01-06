
#include "SuperTrap.hpp"



SuperTrap::SuperTrap(std::string name) : ClapTrap(name) , FragTrap(name), NinjaTrap(name)
{
    ClapTrap::setDetailes(name , 100, 100, 120, 120 ,1, 30 , 20, 5);
}

SuperTrap::SuperTrap() : ClapTrap() , FragTrap(), NinjaTrap()
{
ClapTrap::setDetailes("" , 100, 100, 120, 120 ,1, 30 , 20, 5);
}

SuperTrap::~SuperTrap()
{
    std::cout << "Super-TP " + this->NinjaTrap::name + "has gone" << std::endl;
}

void    SuperTrap::rangedAttack(std::string const & target)
{
    FragTrap::rangedAttack(target);
}
void    SuperTrap::meleeAttack(std::string const & target)
{
    NinjaTrap::meleeAttack(target);
}
