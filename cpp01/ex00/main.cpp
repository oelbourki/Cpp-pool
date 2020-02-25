/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:20:19 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:20:20 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

void ponyOnTheHeap()
{
    Pony *apple;

    apple = new Pony;
    apple->set("MAGGY", "red", "Heap", 100,99);
    apple->print_song();
    delete apple;
}

void ponyOnTheStack()
{
    Pony apple("CLARA", "red", "Stack", 100,99);
    apple.print_song();
}

int main()
{
    std::cout << "THE Heap clane" << std::endl;
    ponyOnTheHeap();
    std::cout << "THE Stack clane" << std::endl;
    ponyOnTheStack();
    return (0);
}