#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"



int     main()
{
    std::string type;
    int N;
    std::cout << "creating your ZombieHorde" << std::endl;
    std::cout << "enter the Number" << std::endl;
    std::cin >> N;
    std::cout << "enter the type" << std::endl;
    std::cin >> type;
    ZombieHorde Horde(N);
    Horde.setZombieType(type);
    Horde.announce();
    std::cout << "to war" << std::endl;
    return (0);
}