/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:20:11 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:20:12 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>

#include "Contact.hpp"
const std::string info[11] = {
		"first name",
		"last name",
		"nickname",
		"login",
		"postal address",
		"email address",
		"phone number",
		"birthday date",
		"favorite meal",
		"underwear color",
		"darkest secret"};
std::string user_info[11];
Contact c[8];
void Contact::print_info()
{
	std::cout << "first name: " << std::setw(25) <<  this->first_name << std::endl;
	std::cout << "last name: " << std::setw(25) <<  this->last_name << std::endl;
	std::cout << "nickname: " << std::setw(25) <<  this->nickname << std::endl;
	std::cout << "login: " << std::setw(25) <<  this->login << std::endl;
	std::cout << "postal address: " << std::setw(25) <<  this->postal_address << std::endl;
	std::cout << "email address: " << std::setw(25) <<  this->email_address << std::endl;
	std::cout << "phone number: " << std::setw(25) <<  this->phone_number << std::endl;
	std::cout << "birthday date: " << std::setw(25) <<  this->birthday_date << std::endl;
	std::cout << "favorite meal: " << std::setw(25) <<  this->favorite_meal << std::endl;
	std::cout << "underwear color: " << std::setw(25) <<  this->underwear_color << std::endl;
	std::cout << "darkest secret: " << std::setw(25) <<  this->darkest_secret << std::endl;

}

std::string &trim(std::string &s,const std::string &delimiters=" \f\n\r\t\v")
{
	s.erase(s.find_last_not_of(delimiters) + 1);
	s.erase(0,s.find_first_not_of(delimiters));
    return s;
}

int main()
{
	int index(0);
	std::string command;
	std::cout << "My Awesome PhoneBook" << std::endl;
	std::cout << "prompt>>";
	while (std::getline(std::cin, command))
	{

		trim(command);
		if (command == "ADD")
		{
			if (index >= 8)
			{
				std::cout << "you are limited to 8 contact only!!!!!"<< std::endl;
				continue;
			}
			int i = 0;
			while (i < 11)
			{
				std::cout << info[i] << std::endl;
				std::getline(std::cin,user_info[i]);
				i++;
			}
			c[index] = Contact(user_info,index);
			index++;
		}
		if (command == "SEARCH")
		{
			size_t id = 0;
			std::cout << std::setw(10) <<  "index" << '|';
			std::cout << std::setw(10) <<  "first name" << '|';
			std::cout << std::setw(10) <<  "last name" << '|';
			std::cout << std::setw(10) <<  "nickname" << std::endl;
			int i = 0;
			while (i < 4)
			{
				if (!c[i].is_empty())
					c[i].print_fields();
				i++;
			}
			std::cout << "insert index: ";
			std::string id_str;
			getline(std::cin,id_str);
			std::stringstream num(id_str);
			num >> id;
			if (id < 0 || id >= 8)
			{
				std::cout << "index does not make sense " << std::endl;
				return 1;
			}
			c[id].print_info();
		}
		if (command == "EXIT")
			break;
		std::cout << "prompt>>";
	}
	return (0);
}