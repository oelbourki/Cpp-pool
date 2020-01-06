#include "Character.hpp"


Character::Character(std::string const & name)
{
    this->name = name;
    this->ap = 40;
    this->wep = NULL;
    return;
}
Character::Character(const Character &a)
{
    *this = a;
    return;
}

Character &Character::operator=(const Character &a)
{
    return const_cast<Character&>(a);
}
Character::Character()
{
    this->name = "";
    this->ap = 40;
    this->wep = NULL;
    return;
}
Character::~Character()
{
    return;
}
void Character::recoverAP()
{
    this->ap += 10;
    if (this->ap > 40)
        this->ap = 40;
}
void Character::equip(AWeapon* aweapon)
{
    delete this->wep;
    this->wep = aweapon;
}
void Character::attack(Enemy* enemy)
{
    if (!enemy || !enemy->getHP())
        return;
    if (this->wep)
    {
        if (this->ap != 0 && this->ap >= this->wep->getAPCost())
        {
            std::cout << this->name + " attacks " + enemy->getType() + " with a " + this->wep->getName() << std::endl;
           this->wep->attack();
            enemy->takeDamage(this->wep->getDamage());
            this->ap -= this->wep->getAPCost();
            if (this->ap <= 0)
                this->ap = 0;
            if (enemy->getHP() <= 0)
            {
                enemy->~Enemy();
                delete enemy;
            }

        }
    }
   
}
std::string Character::getName() const
{
    return this->name;
}
int Character::getAp() const
{
    return this->ap;
}
AWeapon *Character::getWeapon() const
{
    return this->wep;
}
std::ostream& operator<< (std::ostream& out, const Character &_Character)
{
    if (_Character.getWeapon())
        out << _Character.getName() + " has " << _Character.getAp() << " AP and wields a " + _Character.getWeapon()->getName() + "\n";
    else 
        out << _Character.getName() + " has " << _Character.getAp() << " AP and is unarmed\n";
    return out;
}