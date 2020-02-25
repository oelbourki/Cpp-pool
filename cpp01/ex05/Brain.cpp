/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:21:11 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:21:12 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>
Brain::Brain(int weight,int fats,int iq)
{
    this->fats = fats;
    this->iq = iq;
    this->weight = weight;
}
Brain::Brain()
{
    this->weight = 0;
    this->fats = 0;
    this->iq = 0;
}
 
Brain::~Brain()
{
}

std::string    Brain::identify() const
{
    std::stringstream hexStr;
    hexStr << std::hex << this;
    return hexStr.str();
}