/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:21:07 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:21:08 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int     main()
{
    std::string brain;
    std::string *string_ptr;
    brain = "HI THIS IS BRAIN";
    std::string &string_ref(brain);
    string_ptr = &brain;
    std::cout << *string_ptr << std::endl;
    std::cout << string_ref << std::endl;
    return (0);
}