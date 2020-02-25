/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:21:30 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:21:31 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"



class HumanB
{
    private:
        std::string name;
        Weapon *tool;
    public:
        HumanB(std::string name);
        HumanB();
        ~HumanB();
        void    attack();
        void    setWeapon(Weapon &tool);
};
#endif