/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:23:43 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:23:44 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"



ScavTrap::ScavTrap(std::string name)
{
    std::cout << "SCAV-TP " + this->name + "has been created" << std::endl;
    this->hit_points = 100;
    this->max_hit_points = 100;
    this->energy_points = 100;
    this->max_energy_points = 100;
    this->level = 1;
    this->name = name;
    this->melee_attack_damage = 30;
    this->ranged_attack_damage = 20;
    this->armor_damage_reduction = 5;
}

ScavTrap::ScavTrap()
{
    std::cout << "a SCAV-TP has been created" << std::endl;
    this->hit_points = 100;
    this->max_hit_points = 100;
    this->energy_points = 100;
    this->max_energy_points = 100;
    this->level = 1;
    this->name = "";
    this->melee_attack_damage = 30;
    this->ranged_attack_damage = 20;
    this->armor_damage_reduction = 5;
}

ScavTrap::~ScavTrap()
{
    std::cout << "SCAV-TP " + this->name + "has gone" << std::endl;
}

void    ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "SCAV-TP " + this->name + " attacks " + target + " at range, causing ";
    std::cout << this->ranged_attack_damage;
    std::cout << " points of damage !" << std::endl;
}
void    ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "SCAV-TP " + this->name + " attacks " + target + " with melee, causing ";
    std::cout << this->melee_attack_damage;
    std::cout << " points of damage !" << std::endl;
}
void    ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "SCAV-TP " + this->name + " get damaged by an amount of ";
    amount = amount - this->armor_damage_reduction;
    std::cout << amount  << std::endl;
    this->hit_points -= amount;
    if (this->hit_points <= 0)
        this->hit_points = 0;
}
void    ScavTrap::beRepaired(unsigned int amount)
{
    std::cout << "SCAV-TP " + this->name + " being repared by an amount of ";
    std::cout << amount << std::endl;
    this->hit_points += amount;
    if (this->hit_points >= this->max_hit_points)
        this->hit_points = this->max_hit_points;
}


std::string ScavTrap::challenges[5] = {
	"Hello, newcomer! Find me a lemon, and this door shall be yours.",
	"Is the cake a lie?",
	"Tell me a joke, and maybe I\'ll consider opening. Wait, that\'s a great joke!",
	"I\'m SC4V-TP. I won\'t let you go through, unless you solve my riddle.",
	"Fetch me a mojito, and I\'ll call quits on this one."
};
void    ScavTrap::challengeNewcomer(std::string const & target)
{
    if (this->energy_points < 25)
    {
        std::cout << "not enough" << std::endl;
        return ;
    }
    this->energy_points -= 25;
    if (this->energy_points <= 0)
        this->energy_points = 0;
    std::cout << "attacking " << target << std::endl;
    std::cout << challenges[rand() % 5] << std::endl;
}