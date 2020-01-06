#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>


class Fixed
{
    private:
        int store;
        static const int frac = 8;
    public:
        Fixed(int const &val);
        Fixed(float const &val);
        Fixed();
        ~Fixed();
        Fixed &operator=(Fixed const &a);
        Fixed(Fixed const &f);
        int getRawBits( void ) const;
        void setRawBits( int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
};


std::ostream& operator<< (std::ostream& out, const Fixed& _Fixed);
#endif