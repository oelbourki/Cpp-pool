/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:24:30 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:24:31 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Enemy 
{
    protected:
        int hp;
        std::string type;

    public:
        Enemy(int hp, std::string const & type);
        Enemy();
        virtual ~Enemy();
        Enemy(const Enemy &a);
        Enemy &operator=(const Enemy &a);
        std::string getType() const;
        int getHP() const;
        virtual void takeDamage(int);
};

std::ostream& operator<< (std::ostream& out, Enemy const &_Enemy);