#pragma once
#include "Enemy.hpp"
class SuperMutant : public Enemy
{
    public:
        SuperMutant();
        ~SuperMutant();
        SuperMutant(const SuperMutant &a);
        SuperMutant &operator=(const SuperMutant &a);
        void takeDamage(int a);
};

