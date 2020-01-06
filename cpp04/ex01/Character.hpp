#pragma once
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include <sstream>
class Character
{
    private:
        std::string name;
        AWeapon *wep;
        int ap;
    public:
        Character(std::string const & name);
        Character(Character const &a);
        Character();
        ~Character();
        Character &operator=(Character const &a);
        void recoverAP();
        void equip(AWeapon*);
        virtual void attack(Enemy*);
        std::string getName() const;
        int getAp() const;
        AWeapon *getWeapon() const;
};

std::ostream& operator<< (std::ostream& out, Character const &_Character);