#pragma once
#include <iostream>

class Enemy 
{
    protected:
        int hp;
        std::string type;

    public:
        Enemy(int hp, const std::string &type);
        Enemy();
        virtual ~Enemy();
        Enemy(const Enemy &a);
        Enemy &operator=(const Enemy &a);
        std::string getType() const;
        int getHP() const;
        virtual void takeDamage(int);
};

std::ostream& operator<< (std::ostream& out, const Enemy &_Enemy);