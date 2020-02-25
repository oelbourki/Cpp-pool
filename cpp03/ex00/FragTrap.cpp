/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:22:18 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:22:19 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"



FragTrap::FragTrap(std::string name)
{
    std::cout << "FR4G-TP " + this->name + "has been created" << std::endl;
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

FragTrap::FragTrap()
{
    std::cout << "a FR4G-TP has been created" << std::endl;
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
FragTrap::FragTrap(const FragTrap &frag)
{
    this->hit_points = frag.hit_points;
    this->max_hit_points = frag.max_hit_points;
    this->energy_points = frag.energy_points;
    this->max_energy_points = frag.max_energy_points;
    this->level = frag.level;
    this->name = frag.name;
    this->melee_attack_damage = frag.melee_attack_damage;
    this->ranged_attack_damage = frag.ranged_attack_damage;
    this->armor_damage_reduction = frag.armor_damage_reduction;
}
FragTrap::~FragTrap()
{
    std::cout << "FR4G-TP " + this->name + " has gone" << std::endl;
}

void    FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " + this->name + " attacks " + target + " at range, causing ";
    std::cout << this->ranged_attack_damage;
    std::cout << " points of damage !" << std::endl;
}
void    FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " + this->name + " attacks " + target + " with melee, causing ";
    std::cout << this->melee_attack_damage;
    std::cout << " points of damage !" << std::endl;
}
void    FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "FR4G-TP " + this->name + " get damaged by an amount of ";
    amount = amount - this->armor_damage_reduction;
    std::cout << amount  << std::endl;
    this->hit_points -= amount;
    if (this->hit_points <= 0)
        this->hit_points = 0;
}
void    FragTrap::beRepaired(unsigned int amount)
{
    std::cout << "FR4G-TP " + this->name + " being repared by an amount of " ;
    std::cout << amount << std::endl;
    this->hit_points += amount;
    if (this->hit_points >= this->max_hit_points)
        this->hit_points = this->max_hit_points;
}

std::string FragTrap::vaulthunterQuotes[25] = {
	"This time it\'ll be awesome, I promise!",
	"Hey everybody, check out my package!",
	"Place your bets!",
	"Defragmenting!",
	"Recompiling my combat code!",
	"Running the sequencer!",
	"It\'s happening... it\'s happening!",
	"It\'s about to get magical!",
	"I\'m pulling tricks outta my hat!",
	"You can\'t just program this level of excitement!",
	"What will he do next?",
	"Things are about to get awesome!",
	"Let\'s get this party started!",
	"Glitchy weirdness is term of endearment, right?",
	"Push this button, flip this dongle, voila! Help me!",
	"square the I, carry the 1... YES!",
	"Resequencing combat protocols!",
	"Look out everybody, things are about to get awesome!",
	"I have an IDEA!",
	"Round and around and around she goes!",
	"It\'s like a box of chocolates...",
	"Step right up to the sequence of Trapping!",
	"Hey everybody, check out my package!",
	"Loading combat packages!",
	"F to the R to the 4 to the G to the WHAAT!"
};
void    FragTrap::vaulthunter_dot_exe(std::string const & target)
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
    std::cout << this->vaulthunterQuotes[rand() % 25] << std::endl;
    
}