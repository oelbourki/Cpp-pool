/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:25:41 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:25:42 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat jam("jam",1);
    Form form("creat",5,10);
    Form form1("creat",5,10);
    std::cout << form;
   // jam.signForm(0);
    return (0);
}