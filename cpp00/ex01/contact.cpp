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
size_t Contact::index = 0;
// Contact::Contact(std::string first_name,
// 		std::string last_name,
// 		std::string nickname,
// 		std::string login,
// 		std::string postal_address,
// 		std::string email_address,
// 		std::string phone_number,
// 		std::string birthday_date,
// 		std::string favorite_meal,
// 		std::string underwear_color,
// 		std::string darkest_secret)
// {
// 	this->first_name = first_name;
// 	this->last_name = last_name;
// 	this->nickname = nickname ;
// 	this->login = login;
// 	this->postal_address = postal_address;
// 	this->email_address = email_address;
// 	this->phone_number = phone_number;
// 	this->birthday_date = birthday_date ;
// 	this->favorite_meal = favorite_meal;
// 	this->underwear_color = underwear_color;
// 	this->darkest_secret= darkest_secret;
// }
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
	index++;
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
	index++;
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

size_t Contact::get_index()
{
	return this->index;
}
// Contact::Contact(std::string *table)
// {
// 	this->table[0] = table[0];
// 	this->table[1] = table[1];
// 	this->table[2] = table[2];
// 	this->table[3] = table[3];
// 	this->table[4] = table[4];
// 	this->table[5] = table[5];
// 	this->table[6] = table[6];
// 	this->table[7] = table[7];
// 	this->table[8] = table[8];
// 	this->table[9] = table[9];
// 	this->table[10] = table[10];
// }
// Contact::~Contact()
// {
// 	return;
// }
// void Contact::set(std::string *table)
// {
// 	this->table[0] = table[0];
// 	this->table[1] = table[1];
// 	this->table[2] = table[2];
// 	this->table[3] = table[3];
// 	this->table[4] = table[4];
// 	this->table[5] = table[5];
// 	this->table[6] = table[6];
// 	this->table[7] = table[7];
// 	this->table[8] = table[8];
// 	this->table[9] = table[9];
// 	this->table[10] = table[10];
// }
// Contact::Contact()
// {
// 	int i;

// 	i = 0;
// 	this->table[i++] = "";
// 	this->table[i++] = "";
// 	this->table[i++] = "";
// 	this->table[i++] = "";
// 	this->table[i++] = "";
// 	this->table[i++] = "";
// 	this->table[i++] = "";
// 	this->table[i++] = "";
// 	this->table[i++] = "";
// 	this->table[i++] = "";
// 	this->table[i++] = "";
// }
// void Contact::print_table()
// {
// 	int i = 0;
// 	while (i < 11)
// 	{
// 		std::cout << this->table[i] << std::endl;
// 		i++;
// 	}
// }

// void Contact::search(int j)
// {
// 	std::string dot = ".";
// 	std::string space[3];
// 	space[0] = "          |";
// 	space[1] = "          |";
// 	space[2] = "          |";
// 	std::cout << j ;
// 	std::cout << "         |" ;
// 	if (this->table[0].length() > 10)
// 		this->table[0].replace(9,this->table[0].length() - 1, dot);
// 	space[0].replace(0,this->table[0].length() - 1,this->table[0]);
// 	if (this->table[1].length() > 10)
// 		this->table[1].replace(9,this->table[1].length() - 1, dot);
// 	space[1].replace(0,this->table[1].length() - 1,this->table[1]);
// 	if (this->table[2].length() > 10)
// 		this->table[2].replace(9,this->table[2].length() - 1, dot);
// 	space[2].replace(0,this->table[2].length() - 1,this->table[2]);
// 	std::cout << space[0] + space[1] + space[2];
	
// }