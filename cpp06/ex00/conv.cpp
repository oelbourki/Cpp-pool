/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:26:54 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:26:55 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"


conversion::conversion() : _number("")
{
}
conversion::conversion(std::string number) : _number(number)
{
}
conversion::~conversion()
{
    return;
}
conversion::operator char()
{
    int c = 0;
    try
    {
        c = std::stoi(this->_number);
    }
    catch(const std::exception& e)
    {
        throw conversionError();
    }
    return static_cast<char>(c);
}
conversion::operator int()
{
    int c = 0;
    try
    {
        c = std::stoi(this->_number);
    }
    catch(const std::exception& e)
    {
        throw conversionError();
    }
    return static_cast<int>(c);
}
conversion::operator float()
{
    float c = 0.0;
    try
    {
        c = std::stof(this->_number);
    }
    catch(const std::exception& e)
    {
        throw conversionError();
    }
    return static_cast<float>(c);
}
conversion::operator double()
{
    double c = 0.0;
    try
    {
        c = std::stod(this->_number);
    }
    catch(const std::exception& e)
    {
        throw conversionError();
    }
    return static_cast<double>(c);
}

conversion::conversionError::conversionError()
{
    return;
}
conversion::conversionError::~conversionError() throw()
{
    return;
}
const char *conversion::conversionError::what() const throw()
{
    return ("impossible");
}
int main(int argc,char **argv)
{
    if (argc > 2)
    {
        std::cout << "more than one argument" << std::endl;
    }
    else if (argc == 2)
    {
      //  std::string arg = argv[1];
       // if (arg.length() == 1 && )
        std::cout << std::fixed << std::setprecision(1);
        conversion conv(argv[1]);
        std::cout << "char: ";
        try
        {
            int c = static_cast<int>(conv);
            if (!(c >= 32 && c < 127))
                std::cout << "Non displayable" << std::endl;
            else 
            {
                char x = static_cast<int>(c);
                std::cout << "'" << x << "'" << std::endl;
            }
        }
        catch(conversion::conversionError &e)
        {
            std::cerr << e.what() << '\n';
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << "int: ";
        try
        {
            std::cout << static_cast<int>(conv) << std::endl;
        }
        catch(conversion::conversionError &e)
        {
            std::cerr << e.what() << '\n';
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << "float: ";
        try
        {
            std::cout << static_cast<float>(conv) << 'f' << std::endl;
        }
        catch(conversion::conversionError &e)
        {
            std::cerr << e.what() << '\n';
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << "double: ";
        try
        {
            std::cout << static_cast<double>(conv) << std::endl;
        }
        catch(conversion::conversionError &e)
        {
            std::cerr << e.what() << '\n';
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        } 
    }
    return (0);
}