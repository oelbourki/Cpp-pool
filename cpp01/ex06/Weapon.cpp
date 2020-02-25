/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:21:34 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:21:35 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>


Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::Weapon()
{
    this->type = "";
}

Weapon::~Weapon()
{
}

const std::string    &Weapon::getType()
{
    return (this->type);
}


void    Weapon::setType(std::string type)
{
    this->type = type;
}