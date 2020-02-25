/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:24:02 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:24:03 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PEON_HPP
#define PEON_HPP
#include "Victim.hpp"
class Peon : virtual public Victim {
	public:
		Peon(std::string name);
		Peon();
		~Peon();
 		void getPolymorphed() const;
		std::string get_name();
	protected:
	private:
        std::string name;
};

#endif 
