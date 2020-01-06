// #include "easyfind.hpp"
#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <iostream> 

template <class T>
int    easyfind(T list,int val)
{
    typename T::iterator it = list.begin();
    typename T::iterator et = list.end();
    int i = 0;
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
        std::cerr << e.what() << '\n';
    }
    if (*it == val)
        return i;
    throw std::exception();
}


int main()
{
    std::vector<int> f;
    f.push_back(0);
    f.push_back(1);
    f.push_back(2);
    f.push_back(3);
    f.push_back(4);
    f.push_back(5);
    std::cout << easyfind<std::vector<int> >(f,0) << std::endl;
    return 0;
}