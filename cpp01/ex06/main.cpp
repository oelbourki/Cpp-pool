/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:21:33 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:21:34 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

/*
It's only preferable to store references as data members
if they're being assigned at construction
and there is truly no reason to ever change them.
Since references cannot be reassigned, they are very limited.

In general, I typically store as pointers
(or some form of templated smart pointer).
This is much more flexible - both for testing
(as you mentioned) but also just in terms of normal usage.
*/
int main()
{
	{   
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		std::cout << club.getType() << std::endl;
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}