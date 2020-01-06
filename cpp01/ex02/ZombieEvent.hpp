#pragma once
#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
    private:
        std::string type;
        static const std::string names[20];
    public:
        void    setZombieType(std::string type);
        Zombie* newZombie(std::string name);
        Zombie* randomChump();
};