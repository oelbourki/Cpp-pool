#include "ZombieHorde.hpp"

void    ZombieHorde::setZombieType(std::string type)
{
    this->type = type;
}

ZombieHorde::ZombieHorde(int N)
{
    this->N = N;
    this->user = new Zombie[N];
    int i = 0;
    Zombie u;
    while (i < N)
    {
        this->user[i].set_Zombie(this->names[rand() % 20], this->type);
        i++;
    }
}

ZombieHorde::ZombieHorde()
{
    this->N = 0;
}
ZombieHorde::~ZombieHorde()
{
    delete [] this->user;
}


void    ZombieHorde::create(int N)
{
    int i = 0;
    Zombie u;
    this->user = new Zombie[N];
    while (i < N)
    {
        u = this->user[i];
        u.set_Zombie(this->names[rand() % 20], this->type);
        i++;
    }
}

void    ZombieHorde::announce()
{
    int i = 0;
    while (i < N)
    {
        this->user[i].announce();
        i++;
    }
}


const std::string ZombieHorde::names[20] = {
            "Gus",
            "Harrison",
            "Sid",
            "Gerry",
            "Mariano",
            "Gayle",
            "Jay",
            "Deangelo",
            "Carmelo",
            "Hector",
            "Willian",
            "Gavin",
            "Rey",
            "Jessie",
            "Elwood",
            "Buford",
            "Jamar",
            "Kim",
            "Rogelio",
            "Alec",
        };