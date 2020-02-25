/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:20:02 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:20:03 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include <iostream>
class contact
{
    private:
        std::string table[11];
        static int numofuser;
    public:
        contact(std::string *table);
        void    print_table();
        void    set(std::string *table);
        contact();
        ~contact();
        void    search(int j);
};