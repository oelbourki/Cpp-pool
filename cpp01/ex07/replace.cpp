/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:21:41 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:21:42 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

 void    replace_file(std::string filename, std::string s1, std::string s2)
 {
    std::ofstream file;
    std::ifstream from_file;
    std::stringstream buffer;
    std::string holder;
    std::size_t found = 0;
    std::size_t len = s1.length();
    from_file.open(filename,std::ios_base::in);
    file.open(filename + ".replace",std::ios_base::out);
    if(!file.is_open() || !from_file.is_open())
        return;
    buffer << from_file.rdbuf();
    holder = buffer.str();
    while ((found = holder.find(s1)) != std::string::npos)
    {
        holder.replace(found,len,s2);
    }
    file << holder;
    file.close();
    from_file.close();
}

int main()
{
   replace_file("text.text", "play", "work");
    return (0);
}