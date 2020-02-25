/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:24:43 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:24:44 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"


RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}
RadScorpion::RadScorpion()
{
    std::cout << "* click click click *" << std::endl;
    this->hp = 80;
    this->type = "RadScorpion";
}

RadScorpion::RadScorpion(RadScorpion const &a)
{
    *this = a;
    std::cout << "* click click click *" << std::endl;
}
RadScorpion &RadScorpion::operator=(RadScorpion const &a)
{
    return const_cast<RadScorpion&>(a);
}
