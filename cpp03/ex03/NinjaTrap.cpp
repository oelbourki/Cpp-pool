#include "NinjaTrap.hpp"



NinjaTrap::NinjaTrap(std::string name)
{
    std::cout << "Ninja-TP " + this->name + "has been created" << std::endl;
    this->hit_points = 60;
    this->max_hit_points = 60;
    this->energy_points = 120;
    this->max_energy_points = 120;
    this->level = 1;
    this->name = name;
    this->melee_attack_damage = 60;
    this->ranged_attack_damage = 5;
    this->armor_damage_reduction = 0;
}

NinjaTrap::NinjaTrap()
{
    std::cout << "a Ninja-TP has been created" << std::endl;
    this->hit_points = 60;
    this->max_hit_points = 60;
    this->energy_points = 120;
    this->max_energy_points = 120;
    this->level = 1;
    this->name = "";
    this->melee_attack_damage = 60;
    this->ranged_attack_damage = 5;
    this->armor_damage_reduction = 0;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "Ninja-TP " + this->name + "has gone" << std::endl;
}

void    NinjaTrap::rangedAttack(std::string const & target)
{
    std::cout << "Ninja-TP " + this->name + " attacks " + target + " at range, causing ";
    std::cout << this->ranged_attack_damage;
    std::cout << " points of damage !" << std::endl;
}
void    NinjaTrap::meleeAttack(std::string const & target)
{
    std::cout << "Ninja-TP " + this->name + " attacks " + target + " with melee, causing ";
    std::cout << this->melee_attack_damage;
    std::cout << " points of damage !" << std::endl;
}
void    NinjaTrap::takeDamage(unsigned int amount)
{
    std::cout << "Ninja-TP " + this->name + " get damaged by an amount of ";
    amount = amount - this->armor_damage_reduction;
    std::cout << amount << std::endl;
    this->hit_points -= amount;
    if (this->hit_points <= 0)
        this->hit_points = 0;
}
void    NinjaTrap::beRepaired(unsigned int amount)
{
    std::cout << "Ninja-TP " + this->name + " being repared by an amount if";
    std::cout << amount  << std::endl;
    this->hit_points += amount;
    if (this->hit_points >= this->max_hit_points)
        this->hit_points = this->max_hit_points;
}

void    NinjaTrap::ninjaShoebox(FragTrap &target)
{
    if (this->energy_points < 25)
    {
        std::cout << "not enough" << std::endl;
        return ;
    }
    this->energy_points -= 25;
    if (this->energy_points <= 0)
        this->energy_points = 0;
    std::cout << this->vaulthunterQuotes[rand() % 25] << std::endl;
    target.takeDamage(15);
}

void    NinjaTrap::ninjaShoebox(ScavTrap &target)
{
    if (this->energy_points < 25)
    {
        std::cout << "not enough" << std::endl;
        return ;
    }
    this->energy_points -= 25;
    if (this->energy_points <= 0)
        this->energy_points = 0;
    std::cout << this->vaulthunterQuotes[rand() % 25] << std::endl;
    target.takeDamage(15);
}

void    NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
    if (this->energy_points < 25)
    {
        std::cout << "not enough" << std::endl;
        return ;
    }
    this->energy_points -= 25;
    if (this->energy_points <= 0)
        this->energy_points = 0;
    std::cout << "attacking " << target.name << std::endl;
    std::cout << this->vaulthunterQuotes[rand() % 25] << std::endl;
    target.takeDamage(15);
}

std::string NinjaTrap::vaulthunterQuotes[25] = {
	"This time it'll be awesome, I promise!",
	"Hey everybody, check out my package!",
	"Place your bets!",
	"Defragmenting!",
	"Recompiling my combat code!",
	"Running the sequencer!",
	"It's happening... it's happening!",
	"It's about to get magical!",
	"I'm pulling tricks outta my hat!",
	"You can't just program this level of excitement!",
	"What will he do next?",
	"Things are about to get awesome!",
	"Let's get this party started!",
	"Glitchy weirdness is term of endearment, right?",
	"Push this button, flip this dongle, voila! Help me!",
	"square the I, carry the 1... YES!",
	"Resequencing combat protocols!",
	"Look out everybody, things are about to get awesome!",
	"I have an IDEA!",
	"Round and around and around she goes!",
	"It's like a box of chocolates...",
	"Step right up to the sequence of Trapping!",
	"Hey everybody, check out my package!",
	"Loading combat packages!",
	"F to the R to the 4 to the G to the WHAAT!"
};