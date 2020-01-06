#pragma once
#include <iostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : virtual public ClapTrap , virtual public NinjaTrap , virtual public FragTrap
{
    public:
        SuperTrap(std::string name);
        SuperTrap();
        ~SuperTrap();
        void    rangedAttack(std::string const & target);
        void    meleeAttack(std::string const & target);
};