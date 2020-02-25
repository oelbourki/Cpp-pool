/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:24:07 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:24:08 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"
class Sorcerer {
    public:
    Sorcerer(std::string name, std::string title);
    Sorcerer();
    Sorcerer(Sorcerer const & wiz);
    Sorcerer & operator=(const Sorcerer & wiz);
    void polymorph(Victim const &) const;
    std::string     get_name();
    std::string     get_title();
    ~Sorcerer();
    private:
    std::string name;
    std::string title;
};
std::ostream& operator<< (std::ostream& out, Sorcerer& _Sorcerer);