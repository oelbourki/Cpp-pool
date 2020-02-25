/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:20:40 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:20:41 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
    private:
        std::string name;
        std::string type;
    public:
        void announce();
        Zombie(std::string name,std::string type);
        void    set_Zombie(std::string name,std::string type);
        Zombie();
        ~Zombie();
};