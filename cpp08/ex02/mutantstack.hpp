/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:28:50 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:28:51 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <iostream> 
#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
    private:
    std::list<T> _stack;
public:
    MutantStack<T>()
    {
        return;
    }
    MutantStack(MutantStack const &m)
    {
        (void)m;
        return;
    }
    ~MutantStack<T>()
    {
        return;
    }
    MutantStack &operator=(MutantStack const &m)
    {
        (void)m;
        return;
    }
    T top()
    {
        return _stack.front();
    }
    T size()
    {
        return _stack.size();
    }
    typedef typename std::list<T>::iterator iterator;
    iterator begin()
    {
        return _stack.begin();
    }
    iterator end()
    {
        return _stack.end();
    }
    void    push(T val)
    {
        _stack.push_front(val);
    }
    void    pop()
    {
        _stack.pop_front();
    }
};
