/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:20:08 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:20:08 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(std::string user_info[11],size_t id)
{
	this->pos = id;
	this->empty = 0;
	this->first_name = user_info[0];
	this->last_name = user_info[1];
	this->nickname = user_info[2];
	this->login = user_info[3];
	this->postal_address = user_info[4];
	this->email_address = user_info[5];
	this->phone_number = user_info[6];
	this->birthday_date = user_info[7];
	this->favorite_meal = user_info[8];
	this->underwear_color = user_info[9];
	this->darkest_secret= user_info[10];
};
Contact::Contact()
{
	this->pos = 0;
	this->empty = 1;
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->login = "";
	this->postal_address = "";
	this->email_address = "";
	this->phone_number = "";
	this->birthday_date = "";
	this->favorite_meal = "";
	this->underwear_color = "";
	this->darkest_secret="";
}
Contact::~Contact()
{

};

std::string truncate(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return str;
}

void Contact::print_fields()
{
	std::cout << std::setw(10) <<  this->pos << '|';
	std::cout << std::setw(10) <<  truncate(this->first_name) << '|';
	std::cout << std::setw(10) <<  truncate(this->last_name) << '|';
	std::cout << std::setw(10) <<  truncate(this->nickname) << std::endl;
}
