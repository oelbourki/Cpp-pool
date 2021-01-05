/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:20:02 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:20:03 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include<string.h>
#include <iostream>
// class Contact
// {
//     private:
//         std::string table[11];
//         static int numofuser;
//     public:
//         Contact(std::string *table);
//         void    print_table();
//         void    set(std::string *table);
//         Contact();
//         ~Contact();
//         void    search(int j);
// };


#include<string.h>
#include <iostream>
class Contact
{

	private:
		size_t pos;
		bool empty;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
	public:
		static size_t index;
		size_t get_index();
		bool is_empty(){
			return this->empty;
		}
		Contact(std::string user_info[11],size_t index);
		Contact();
		~Contact();
		void print_fields();
		void print_info();
};

#endif