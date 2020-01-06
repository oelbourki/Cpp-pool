#pragma once
#include "Enemy.hpp"
class RadScorpion : public Enemy
{
    public:
        RadScorpion();
        virtual ~RadScorpion();
        RadScorpion(RadScorpion const &a);
        RadScorpion &operator=(RadScorpion const &a);
};

