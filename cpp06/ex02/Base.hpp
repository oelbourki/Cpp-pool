/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:27:30 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:27:31 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

class Base
{
public:
    virtual ~Base();
};


Base * generate(void);
void identify_from_pointer(Base * p);
void identify_from_reference( Base & p);
