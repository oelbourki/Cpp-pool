/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:24:54 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:24:54 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"


AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I\\'ll be back ..." << std::endl;
}

ISpaceMarine *AssaultTerminator::clone() const
{
    ISpaceMarine *copy = new AssaultTerminator(*this);
    return copy;
}

void    AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}
void    AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}
void    AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}