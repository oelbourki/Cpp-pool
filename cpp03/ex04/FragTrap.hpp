#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    private:
        static std::string vaulthunterQuotes[25];
    public:
        FragTrap(std::string name);
        FragTrap();
        ~FragTrap();
        void    rangedAttack(std::string const & target);
        void    meleeAttack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    vaulthunter_dot_exe(std::string const & target);
};