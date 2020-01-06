#pragma once 
#include <iostream>

template <class T>
class Array
{
private:
    T *_arr;
    int _size;
public:
    Array();
    Array(unsigned int n);
    Array(Array const &arr);
    ~Array();
    Array<T> &operator=(Array <T>const &arr);
    T &operator[](int i) const;
    int size() const;
};
