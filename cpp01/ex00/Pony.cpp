/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:20:21 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:20:22 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string color, std::string name, std::string tribe, int height, int weight)
{
    this->color = color;
    this->name = name;
    this->tribe = tribe;
    this->height = height;
    this->weight = weight;
}

Pony::~Pony()
{
    std::cout << "destroyed!!" << std::endl;// must be removed
}
void    Pony::set(std::string color, std::string name, std::string tribe, int height, int weight)
{
    this->color = color;
    this->name = name;
    this->tribe = tribe;
    this->height = height;
    this->weight = weight;
}

Pony::Pony(void)
{
    this->color = "";
    this->name = "";
    this->tribe = "";
    this->height = 0;
    this->weight = 0;
}

void Pony::print_song()
{
    std::cout << "asalame alaikem" << std::endl;
    std::cout << "i am the little pony " + this->name + " i am " + this->color + " and my tribe is " + this->tribe << std::endl;
    std::cout << "my height is ";
    std::cout << this->height << std::endl;
    std::cout << "my weight is ";
    std::cout << this->weight << std::endl;
    std::cout << "thalaw" << std::endl;
}