/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:26:09 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:26:10 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    virtual ~ShrubberyCreationForm();
    void    execute(Bureaucrat const & executor) const;
};