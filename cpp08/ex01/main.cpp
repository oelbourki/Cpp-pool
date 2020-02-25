/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:28:34 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:28:34 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"





int main(int argc,char **argv)
{
    //taking a values as argument
    if (argc < 2)
    {
        std::cout << "enter an argument" << std::endl;
        return 0;
    }
    long int i = atoi(argv[1]);
    if (i <= 0)
    {
        std::cout << "please give a value greater than zero\n";
        return 0;
    }
    span s(i);
    long int j = 0;
    int r = 0;
    while (j < i)
    {
        r = rand() % 1000;
        s.addNumber(r);
        std::cout << r << std::endl;
        j++;
    }

    try
    {
        std::cout << "longest span"<< s.longestSpan() << std::endl;
    }
    catch (span::NotEnoughValues &e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "shortest span"<< s.shortestSpan() << std::endl;
    }
    catch (span::NotEnoughValues &e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    } 
    try
    {
        s.addNumber(rand() % 1000);
    }
    catch (span::StorageLimitexception &e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}