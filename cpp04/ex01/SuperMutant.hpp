#pragma once
#include "Enemy.hpp"
class SuperMutant : public Enemy
{
    public:
        SuperMutant();
        ~SuperMutant();
        SuperMutant(SuperMutant const &a);
        SuperMutant &operator=(SuperMutant const &a);
        void takeDamage(int a);
};

