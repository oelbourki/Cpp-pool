/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:24:34 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:24:35 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"


PlasmaRifle::PlasmaRifle(const PlasmaRifle &a)
{
    this->name = a.getName();
    this->ap = a.getAPCost();
    this->damage = a.getDamage();
}
PlasmaRifle::PlasmaRifle()
{
    this->name = "PlasmaRifle Rifle";
    this->ap = 5;
    this->damage = 21;
}
PlasmaRifle::~PlasmaRifle()
{
    return;
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
