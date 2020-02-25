/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:22:32 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:22:32 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    FragTrap frag("max");
    FragTrap tag("xtag");
    ScavTrap scav("max");
    ScavTrap stag("xtag");
    frag.meleeAttack("crap");
    frag.takeDamage(20);
    frag.rangedAttack("craf");
    frag.takeDamage(30);
    frag.beRepaired(15);
    frag.takeDamage(5);
    frag.vaulthunter_dot_exe("xtag");
    tag.takeDamage(200);
    scav.meleeAttack("crap");
    scav.takeDamage(20);
    scav.rangedAttack("craf");
    scav.takeDamage(30);
    scav.beRepaired(15);
    scav.takeDamage(5);
    scav.challengeNewcomer("xtag");
    stag.takeDamage(200);
    return (0);
}