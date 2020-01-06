#pragma once 
#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <iostream> 

template <class T>
int    easyfind(T list,int val)
{
    std::list<int>::iterator it = list.begin();
    std::list<int>::iterator et = list.end();
    long long int i = 0;
    try
    {
        while(it != et)
        {
            if (*it == val)
                return (i);
            i++;
            it++;
        }
    }
    catch(const std::exception& e)
    {
        throw std::excepetion();
    }
    if (*it == val)
        return i;
    throw std::exception();
}



