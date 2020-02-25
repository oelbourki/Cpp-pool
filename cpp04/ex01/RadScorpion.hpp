/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:24:45 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:24:46 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Enemy.hpp"
class RadScorpion : public Enemy
{
    public:
        RadScorpion();
        virtual ~RadScorpion();
        RadScorpion(RadScorpion const &a);
        RadScorpion &operator=(RadScorpion const &a);
};

