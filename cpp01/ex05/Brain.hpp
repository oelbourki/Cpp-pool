/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:21:13 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:21:14 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Brain
{
    private:
        int weight;
        int fats;
        int iq;
    public:
        Brain(int weight,int fats,int iq);
        Brain();
        ~Brain();
        std::string    identify() const;
};