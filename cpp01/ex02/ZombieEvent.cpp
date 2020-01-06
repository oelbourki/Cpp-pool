#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <cstdlib>
void    ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie *user;

    user = new Zombie;
    user->set_Zombie(name,this->type);
    return user;
}

Zombie* ZombieEvent::randomChump()
{
    Zombie *user;

    int r;
    r = rand() % 20;
    user = new Zombie;
    user->set_Zombie(this->names[r],this->type);
    user->announce();
    return user;
}

const std::string ZombieEvent::names[20] = {
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