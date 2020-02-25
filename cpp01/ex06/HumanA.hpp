/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:21:25 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:21:26 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"



class HumanA
{
    private:
        std::string name;
        Weapon *tool;
    public:
        HumanA(std::string name, Weapon &tool);
        HumanA();
        ~HumanA();
        void    attack();
        void    setWeapon(Weapon &tool);
};

#endif