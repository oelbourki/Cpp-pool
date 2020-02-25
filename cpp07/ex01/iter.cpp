/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:27:48 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:27:49 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


template <class T>
void    call(T &a)
{
    std::cout << a << std::endl;
}

template <class T>
void    iter(T *addr,T len, void  (*call) (T &))
{
    for (int i = 0; i < len;i++)
    {
        call(addr[i]);
    }
}

int     main()
{


    int tab[5] = {0,1,2,3,4};
    iter(tab,5,call);
    return 0;
}