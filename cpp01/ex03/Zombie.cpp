/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:20:54 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:20:55 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << "<" + this->name + "(" + this->type +")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
}

void    Zombie::set_Zombie(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
}

Zombie::Zombie()
{
    this->name = "";
    this->type = "";
}

Zombie::~Zombie()
{
}
