#pragma once
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
class NinjaTrap : virtual public ClapTrap
{
    private:
        static std::string vaulthunterQuotes[25];
    public:
        NinjaTrap(std::string name);
        NinjaTrap();
        ~NinjaTrap();
        void    rangedAttack(std::string const & target);
        void    meleeAttack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    ninjaShoebox(NinjaTrap &target);
        void    ninjaShoebox(FragTrap &target);
        void    ninjaShoebox(ScavTrap &target);
};