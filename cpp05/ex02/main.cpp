/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:25:54 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:25:54 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"



int     main()
{
    Bureaucrat staff1("max",1);
    Bureaucrat staff2("jack",150);
    std::cout << "creation of two bureaucrats" << std::endl;
    std::cout << staff1 << std::endl;
    std::cout << staff1 << std::endl;
    PresidentialPardonForm form1("john");
    std::cout << form1;
    form1.beSigned(staff1);
    form1.execute(staff1);
    staff2.executeForm(form1);
    return 0;
}