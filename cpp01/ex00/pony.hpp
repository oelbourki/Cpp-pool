/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:20:24 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:20:25 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony
{
    private:
        std::string color;
        std::string name;
        std::string tribe;
        int height;
        int weight;
    public:
        Pony(std::string color, std::string name, std::string tribe, int height, int weight);
        void    set(std::string color, std::string name, std::string tribe, int height, int weight);
        Pony();
       ~Pony();
        void    print_song();
};

#endif