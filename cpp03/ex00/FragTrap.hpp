/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:22:21 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:22:22 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class FragTrap
{
    private:
        int hit_points;
        int max_hit_points;
        int energy_points;
        int max_energy_points;
        int level;
        std::string name;
        int melee_attack_damage;
        int ranged_attack_damage;
        int armor_damage_reduction;
        static std::string vaulthunterQuotes[25];
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &frag);
        FragTrap();
        ~FragTrap();
        void    rangedAttack(std::string const & target);
        void    meleeAttack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    vaulthunter_dot_exe(std::string const & target);
};