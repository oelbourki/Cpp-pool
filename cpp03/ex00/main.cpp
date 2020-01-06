#include "FragTrap.hpp"

int main()
{
    FragTrap frag("max");
    FragTrap tag("xtag");
    frag.meleeAttack("crap");
    frag.takeDamage(20);
    frag.rangedAttack("craf");
    frag.takeDamage(30);
    frag.beRepaired(15);
    frag.takeDamage(5);
    frag.vaulthunter_dot_exe("xtag");
    tag.takeDamage(200);
    return (0);
}