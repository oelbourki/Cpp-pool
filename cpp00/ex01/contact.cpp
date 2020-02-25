/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:20:08 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:20:08 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact(std::string *table)
{
	this->table[0] = table[0];
	this->table[1] = table[1];
	this->table[2] = table[2];
	this->table[3] = table[3];
	this->table[4] = table[4];
	this->table[5] = table[5];
	this->table[6] = table[6];
	this->table[7] = table[7];
	this->table[8] = table[8];
	this->table[9] = table[9];
	this->table[10] = table[10];
}
contact::~contact()
{
	return;
}
void contact::set(std::string *table)
{
	this->table[0] = table[0];
	this->table[1] = table[1];
	this->table[2] = table[2];
	this->table[3] = table[3];
	this->table[4] = table[4];
	this->table[5] = table[5];
	this->table[6] = table[6];
	this->table[7] = table[7];
	this->table[8] = table[8];
	this->table[9] = table[9];
	this->table[10] = table[10];
}
contact::contact()
{
	int i;

	i = 0;
	this->table[i++] = "";
	this->table[i++] = "";
	this->table[i++] = "";
	this->table[i++] = "";
	this->table[i++] = "";
	this->table[i++] = "";
	this->table[i++] = "";
	this->table[i++] = "";
	this->table[i++] = "";
	this->table[i++] = "";
	this->table[i++] = "";
}
void contact::print_table()
{
	int i = 0;
	while (i < 11)
	{
		std::cout << this->table[i] << std::endl;
		i++;
	}
}

void contact::search(int j)
{
	std::string dot = ".";
	std::string space[3];
	space[0] = "          |";
	space[1] = "          |";
	space[2] = "          |";
	std::cout << j ;
	std::cout << "         |" ;
	if (this->table[0].length() > 10)
		this->table[0].replace(9,this->table[0].length() - 1, dot);
	space[0].replace(0,this->table[0].length() - 1,this->table[0]);
	if (this->table[1].length() > 10)
		this->table[1].replace(9,this->table[1].length() - 1, dot);
	space[1].replace(0,this->table[1].length() - 1,this->table[1]);
	if (this->table[2].length() > 10)
		this->table[2].replace(9,this->table[2].length() - 1, dot);
	space[2].replace(0,this->table[2].length() - 1,this->table[2]);
	std::cout << space[0] + space[1] + space[2];
	
}