/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:28:31 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:28:32 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <iostream> 



int main()
{
    std::vector<int> f;
    f.push_back(0);
    f.push_back(1);
    f.push_back(2);
    f.push_back(3);
    f.push_back(4);
    f.push_back(5);
    try
    {
        std::cout << easyfind<std::vector<int> >(f,8) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "number not found" << '\n';
    }
    return 0;
}