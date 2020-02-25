/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:26:56 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:26:57 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <iomanip>
class conversion
{
private:
    std::string _number;
public:
    conversion();
    conversion(std::string number);
    virtual ~conversion();
    class conversionError : public std::exception
    {
        public:
        conversionError();
        virtual ~conversionError() throw();
        const char* what() const throw();
    };
    operator char();
    operator int();
    operator float();
    operator double();
};
