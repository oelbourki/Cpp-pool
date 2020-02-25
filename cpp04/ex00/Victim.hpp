/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:24:12 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:24:13 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>
class Victim {
	public:
        Victim(std::string name);
		Victim();
		~Victim();
        virtual void getPolymorphed() const;
		std::string get_name();
	protected:
	private:
        std::string name;
};
std::ostream& operator<< (std::ostream& out, Victim& _Victim);
#endif
