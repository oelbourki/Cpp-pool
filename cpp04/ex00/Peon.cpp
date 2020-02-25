/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:24:00 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:24:01 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"


Peon::Peon(std::string name)
{
    std::cout << "Some random victim called " + name + " just popped !" << std::endl;
    this->name = name;
    std::cout << "Zog zog." << std::endl;
}
Peon::Peon()
{

}
Peon::~Peon()
{
   std::cout << "Bleuark..." << std::endl;
   std::cout << "Victim " + this->name + " just died for no apparent reason !" << std::endl;
}

void Peon::getPolymorphed() const
{
   std::cout << this->name + " has been turned into a pink pony !" << std::endl; 
}
std::string     Peon::get_name()
{
    return (this->name);
}
