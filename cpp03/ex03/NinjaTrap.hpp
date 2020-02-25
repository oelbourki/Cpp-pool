/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:23:16 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:23:17 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
class NinjaTrap : public ClapTrap
{
    private:
        static std::string vaulthunterQuotes[25];
    public:
        NinjaTrap(std::string name);
        NinjaTrap();
        ~NinjaTrap();
        void    rangedAttack(std::string const & target);
        void    meleeAttack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    ninjaShoebox(NinjaTrap &target);
        void    ninjaShoebox(FragTrap &target);
        void    ninjaShoebox(ScavTrap &target);
};