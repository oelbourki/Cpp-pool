/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:24:32 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:24:33 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "Character.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Enemy.hpp"

// int main()
// {
// Character* me = new Character("me");
// std::cout << *me;
// Enemy* b = new RadScorpion();
// AWeapon* pr = new PlasmaRifle();
// AWeapon* pf = new PowerFist();
// AWeapon *ps = new PowerFist();
// AWeapon *px = new PlasmaRifle();
// me->equip(pr);
// std::cout << *me;
// me->equip(pf);
// me->attack(b);
// std::cout << *me;
// me->equip(px);
// std::cout << *me;
// me->attack(b);
// std::cout << *me;
// me->attack(b);
// std::cout << *me;
// return 0;
// }

int main()
{
Character* me = new Character("me");
std::cout << *me;
Enemy* b = new RadScorpion();
AWeapon* pr = new PlasmaRifle();
AWeapon* pf = new PowerFist();
me->equip(pr);
std::cout << *me;
me->equip(pf);
me->attack(b);
std::cout << *me;
me->equip(pr);
std::cout << *me;
me->attack(b);
std::cout << *me;
me->attack(b);
std::cout << *me;
return 0;
}