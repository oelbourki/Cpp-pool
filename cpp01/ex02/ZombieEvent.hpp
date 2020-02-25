/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:20:47 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:20:48 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
    private:
        std::string type;
        static const std::string names[20];
    public:
        void    setZombieType(std::string type);
        Zombie* newZombie(std::string name);
        Zombie* randomChump();
};