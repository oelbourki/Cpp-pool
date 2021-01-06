/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:20:52 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:20:53 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"



int     main()
{
    std::string type;
    std::string N_str;
    int N;
    std::cout << "creating your ZombieHorde" << std::endl;
    std::cout << "enter the Number" << std::endl;
    //check if number
    std::getline(std::cin,N_str);
    std::stringstream conv(N_str);
    conv >> N;
    // std::cout << "enter the type" << std::endl;
    // std::getline(std::cin,type);
    ZombieHorde Horde(N);
    // Horde.setZombieType(type);
    // Horde.announce();
    std::cout << "to war" << std::endl;
    return (0);
}