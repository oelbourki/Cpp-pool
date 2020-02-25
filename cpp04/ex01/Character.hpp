/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:24:25 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:24:26 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include <sstream>
class Character
{
    private:
        std::string name;
        AWeapon *wep;
        int ap;
    public:
        Character(std::string const & name);
        Character(Character const &a);
        Character();
        ~Character();
        Character &operator=(Character const &a);
        void recoverAP();
        void equip(AWeapon*);
        virtual void attack(Enemy*);
        std::string getName() const;
        int getAp() const;
        AWeapon *getWeapon() const;
};

std::ostream& operator<< (std::ostream& out, Character const &_Character);