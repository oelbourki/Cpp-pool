/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:21:28 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:21:29 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}
HumanB::HumanB()
{
    this->name = "";
    this->tool = NULL;
}
HumanB::~HumanB()
{
}
void    HumanB::attack()
{
    std::cout << this->name + " attacks with his " + this->tool->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &tool)
{
    this->tool = &tool;
}