/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:21:15 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:21:16 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"


Human::Human()
{
}

Human::~Human()
{
}

std::string    Human::identify() const
{
    return this->einstein.identify();
}

const Brain& Human::getBrain() const
{
    return this->einstein;
}