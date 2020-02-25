/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:21:23 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:21:24 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &tool)
{
    this->name = name;
    this->tool = &tool;
}
HumanA::HumanA()
{
    this->name = "";
    this->tool = NULL;
}
HumanA::~HumanA()
{
}
void    HumanA::attack()
{
    std::cout << this->name + " attacks with his " + this->tool->getType() << std::endl;
}
void    HumanA::setWeapon(Weapon &tool)
{
    this->tool = &tool;
}