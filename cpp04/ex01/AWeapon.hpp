/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:24:20 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:24:21 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <iostream>
class AWeapon {
	protected:
        std::string name;
        int ap;
        std::string sound;
        int damage;
	public:
		AWeapon();
		virtual ~AWeapon();
                AWeapon(AWeapon const &a);
                AWeapon(std::string const & name, int apcost, int damage);
                AWeapon &operator=(AWeapon const &a);
                std::string getName() const;
                int getAPCost() const;
                int getDamage() const;
                virtual void attack() const = 0;

};

#endif
