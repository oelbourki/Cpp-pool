/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:23:47 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:23:48 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "SuperTrap.hpp"



SuperTrap::SuperTrap(std::string name) : ClapTrap(name)
{
    ClapTrap::setDetailes(name , 100, 100, 120, 120 ,1, 30 , 20, 5);
}

SuperTrap::SuperTrap() : ClapTrap()
{
ClapTrap::setDetailes("" , 100, 100, 120, 120 ,1, 30 , 20, 5);
}

SuperTrap::~SuperTrap()
{
    std::cout << "Super-TP " + this->NinjaTrap::name + "has gone" << std::endl;
}

void    SuperTrap::rangedAttack(std::string const & target)
{
    FragTrap::rangedAttack(target);
}
void    SuperTrap::meleeAttack(std::string const & target)
{
    NinjaTrap::meleeAttack(target);
}
