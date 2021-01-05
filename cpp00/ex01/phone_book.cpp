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
// void	get_contact(contact *user)
// {
// 	int i;	
// 	i = 0;
// 	std::string table[11];
// 	std::cout << "enter first name" << std::endl;
// 	std::getline( std::cin, table[i++]);
// 	std::cout << "enter last name" << std::endl;
// 	std::getline( std::cin, table[i++]);
// 	std::cout << "enter nickname" << std::endl;
// 	std::getline( std::cin, table[i++]);
// 	std::cout << "enter login" << std::endl;
// 	std::getline( std::cin, table[i++]);
// 	std::cout << "enter postal address" << std::endl;
// 	std::getline( std::cin, table[i++]);
// 	std::cout << "enter email address" << std::endl;
// 	std::getline( std::cin, table[i++]);
// 	std::cout << "enter phone number" << std::endl;
// 	std::getline( std::cin, table[i++]);
// 	std::cout << "enter birthday date" << std::endl;
// 	std::getline( std::cin, table[i++]);
// 	std::cout << "enter favorite meal" << std::endl;
// 	std::getline( std::cin, table[i++]);
// 	std::cout << "enter underwear color" << std::endl;
// 	std::getline( std::cin, table[i++]);
// 	std::cout << "enter darkest secret." << std::endl;
// 	std::getline( std::cin, table[i++]);
// 	user->set(table);
// }

// void	do_search(int i, contact *user)
// {
// 	int j(0);

// 	while (j < i)
// 	{
// 		user[j].search(j);
// 		std::cout << "\n";
// 		j++;
// 	}
	
// }
void Contact::print_info()
{
	std::cout << "first name: " << std::setw(25) <<  this->first_name << std::endl;
	std::cout << "last name: " << std::setw(25) <<  this->last_name << std::endl;
	std::cout << "nickname: " << std::setw(25) <<  this->nickname << std::endl;
	std::cout << "login: " << std::setw(25) <<  this->login << std::endl;
	std::cout << "postal address: " << std::setw(25) <<  this->postal_address << std::endl;
	std::cout << "email address: " << std::setw(25) <<  this->em << std::endl;
	std::cout << "phone number: " << std::setw(25) <<  this->first_name << std::endl;
	std::cout << "birthday date: " << std::setw(25) <<  this->first_name << std::endl;
	std::cout << "favorite meal: " << std::setw(25) <<  this->first_name << std::endl;
	std::cout << "underwear color: " << std::setw(25) <<  this->first_name << std::endl;
	std::cout << "darkest secret: " << std::setw(25) <<  this->first_name << std::endl;

}

int main()
{
	int state = 1;
	int i(0);
	int index(0);
	std::string command;
	std::cout << "the awesome phone terimnal" << std::endl;
	while (state)
	{
		std::cout << "prompt>>";
		std::getline(std::cin,command);
		if (command == "ADD")
		{
			if (index >= 8)
			{
				std::cout << "you are limited to 8 contact only!!!!!"<< std::endl;
			}
			int i = 0;
			while (i < 11)
			{
				std::cout << info[i] << std::endl;
				std::getline(std::cin,user_info[i]);
				i++;
			}
			std::cout << "index>>> " <<index << std::endl;
			c[index] = Contact(user_info,index);
			index++;
			// i= 0;
			// while (i < 11)
			// {
			// 	std::cout << user_info[i] << std::endl;
			// 	i++;
			// }
			
		}
		if (command == "SEARCH")
		{
			size_t id = 0;
			std::cout << std::setw(10) <<  "index" << '|';
			std::cout << std::setw(10) <<  "first name" << '|';
			std::cout << std::setw(10) <<  "last name" << '|';
			std::cout << std::setw(10) <<  "nickname" << std::endl;
			// c[0].print_fields();
			int i = 0;
			while (i < 4)
			{
				if (!c[i].is_empty())
					c[i].print_fields();
				i++;
			}
			std::cout << "insert index " << std::endl;
			std::cin >> id;
			if (id < 0 || id >= 8)
			{
				std::cout << "index does not make sense " << std::endl;
				return 1;
			}

		}
		// if (i > 8)
		// 	std::cout << "only 8" << std::endl;
		// else if (command == "ADD" && i < 8)
		// 	get_contact(&user[i++]);
		// else if (command == "SEARCH")
		// {
		// 	do_search(i, user);
		// 	std::cin >> index;
		// 	if (!(index >= 0 && index < 9))
		// 		std::cout << "index not available" << std::endl;
		// 	else if (!(index >= 0 && index < i) && (index >= 0 && index < 9))
		// 		std::cout << "no contact available at that index" << std::endl;
		// 	else
		// 		user[index].print_table();
		// }
		if (command == "EXIT")
			state = 0;
	}
	return (0);
}