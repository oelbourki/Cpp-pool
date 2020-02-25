/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:27:37 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:27:38 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    Base *ptr = NULL;
    if (rand() % 3 == 0)
        ptr = new A();
    else if (rand() % 3 == 1)
       ptr = new B();
    else 
        ptr = new C();
    return ptr;
}

void identify_from_pointer(Base * p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "ptr " << "class " << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "ptr " << "class " << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "ptr " << "class " << "C" << std::endl;
}

void identify_from_reference( Base & p)
{
    if (dynamic_cast<A*>(&p))
        std::cout << "ref " << "class " << "A" << std::endl;
    else if (dynamic_cast<B*>(&p))
        std::cout << "ref " << "class " << "B" << std::endl;
    else if (dynamic_cast<C*>(&p))
        std::cout << "ref " << "class " << "C" << std::endl;
}

int main()
{
    Base *ptr = generate();
    Base &ref(*ptr);
    identify_from_pointer(ptr);
    identify_from_reference(ref);
}