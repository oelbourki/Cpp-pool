/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:26:27 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:26:27 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "Form.hpp"

class Intern
{
public:
    Intern(/* args */);
    virtual ~Intern();
    Form *makeForm(std::string form,std::string target);
};
