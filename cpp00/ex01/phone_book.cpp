#include <iostream>
#include <sstream>
#include <iomanip>

#include "contact.hpp"

void	get_contact(contact *user)
{
	int i;
	i = 0;
	std::string table[11];
	std::cout << "enter first name" << std::endl;
	std::getline( std::cin, table[i++]);
	std::cout << "enter last name" << std::endl;
	std::getline( std::cin, table[i++]);
	std::cout << "enter nickname" << std::endl;
	std::getline( std::cin, table[i++]);
	std::cout << "enter login" << std::endl;
	std::getline( std::cin, table[i++]);
	std::cout << "enter postal address" << std::endl;
	std::getline( std::cin, table[i++]);
	std::cout << "enter email address" << std::endl;
	std::getline( std::cin, table[i++]);
	std::cout << "enter phone number" << std::endl;
	std::getline( std::cin, table[i++]);
	std::cout << "enter birthday date" << std::endl;
	std::getline( std::cin, table[i++]);
	std::cout << "enter favorite meal" << std::endl;
	std::getline( std::cin, table[i++]);
	std::cout << "enter underwear color" << std::endl;
	std::getline( std::cin, table[i++]);
	std::cout << "enter darkest secret." << std::endl;
	std::getline( std::cin, table[i++]);
	user->set(table);
}

void	do_search(int i, contact *user)
{
	int j(0);

	while (j < i)
	{
		user[j].search(j);
		std::cout << "\n";
		j++;
	}
	
}

int main()
{
	int state = 1;
	int i(0);
	int index(0);
	contact user[8];
	std::string command;
	std::cout << "the awsome phone terimnal" << std::endl;
	while (state)
	{
		std::cout << "prompt>>";
		std::cin >> command;
		std::cin.ignore();
		if (i > 8)
			std::cout << "only 8" << std::endl;
		else if (command == "ADD" && i < 8)
			get_contact(&user[i++]);
		else if (command == "SEARCH")
		{
			do_search(i, user);
			std::cin >> index;
			if (!(index >= 0 && index < 9))
				std::cout << "index not available" << std::endl;
			else if (!(index >= 0 && index < i) && (index >= 0 && index < 9))
				std::cout << "no contact available at that index" << std::endl;
			else
				user[index].print_table();
		}
		else if (command == "EXIT")
			state = 0;
	}
	return (0);
}