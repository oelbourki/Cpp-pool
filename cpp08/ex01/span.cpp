/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:28:39 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:28:40 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>


span::span() : _tab(0),_size(0)
{
}
span::span(unsigned int N) : _size(N)
{
    this->_tab.reserve(N);
}

span::~span()
{
    return;
}


span::span(span const &s)
{
    *this = s;
}
span    &span::operator=(span const &s)
{
    this->_tab = s._tab;
    return *this;
}
int     span::longestSpan()
{
    if (this->_size <= 1)
        throw span::NotEnoughValues();
    else
    {
        std::vector<int> copy = this->_tab;
        return (*std::max_element(copy.begin(),copy.end()) - *std::min_element(copy.begin(),copy.end()));
    }
}
int    span::shortestSpan()
{
    std::vector<int> copy(this->_tab);
    std::sort(copy.begin(),copy.end());
    std::vector<int>::iterator it = copy.begin();
    long int ret = 0;
    long int min = 0;
    min = *(it + 1) - *it;
    for ( it = copy.begin(); it < copy.end() - 1; it++)
    {
        ret = *(it + 1) - *it;
        if (ret < min)
            min = ret;
    }
    return min;
}

void    span::addNumber(int n)
{
    if (this->_tab.size() < this->_size)
    {
        this->_tab.push_back(n);
    }
    else 
        throw span::StorageLimitexception();
}


span::StorageLimitexception::StorageLimitexception()
{
    return;
}
span::StorageLimitexception::~StorageLimitexception() throw()
{
    return;
}
const char *span::StorageLimitexception::what() const throw()
{
    return ("Error: storage limit exception");
}


span::NotEnoughValues::NotEnoughValues()
{
    return;
}
span::NotEnoughValues::~NotEnoughValues() throw()
{
    return;
}
const char *span::NotEnoughValues::what() const throw()
{
    return ("Error: not enough values exception");
}