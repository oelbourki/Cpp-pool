/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:21:17 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:21:18 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

class Human
{
    private:
        const Brain einstein;
    public:
        Human();
        ~Human();
        std::string    identify() const;
        const Brain& getBrain() const;
};