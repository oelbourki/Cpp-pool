/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:24:49 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:24:50 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Enemy.hpp"
class SuperMutant : public Enemy
{
    public:
        SuperMutant();
        ~SuperMutant();
        SuperMutant(SuperMutant const &a);
        SuperMutant &operator=(SuperMutant const &a);
        void takeDamage(int a);
};

