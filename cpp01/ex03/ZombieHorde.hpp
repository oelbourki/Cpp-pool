
#pragma once
#include <iostream>
#include "Zombie.hpp"
class ZombieHorde
{
    private:
        int N;
        Zombie *user;
        static const std::string names[20];
        std::string type;
    public:
        ZombieHorde(int N);
        ZombieHorde();
        ~ZombieHorde();
        void    create(int N);
        void randomChump(Zombie *user);
        void    announce();
        void    setZombieType(std::string type);
};