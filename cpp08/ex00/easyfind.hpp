/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:28:28 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:28:29 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <iostream> 

template <class T>
int    easyfind(T list,int val)
{
    typename T::iterator it = list.begin();
    typename T::iterator et = list.end();
    int i = 0;

    while(it != et)
    {
        if (*it == val)
            return (i);
        i++;
        it++;
    }
    if (*it == val)
        return i;
    throw std::exception();
}

