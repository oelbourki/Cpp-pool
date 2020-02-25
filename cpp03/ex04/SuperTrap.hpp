/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:23:51 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:23:52 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : virtual public ClapTrap , virtual public NinjaTrap , virtual public FragTrap
{
    public:
        SuperTrap(std::string name);
        SuperTrap();
        ~SuperTrap();
        void    rangedAttack(std::string const & target);
        void    meleeAttack(std::string const & target);
};