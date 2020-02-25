/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:22:09 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:22:10 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        Fixed(Fixed const &f);
        int getRawBits( void ) const;
        void setRawBits( int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed &operator=(Fixed const &a);
        bool operator<(Fixed const &a);
        bool operator>(Fixed const &a);
        bool operator>=(Fixed const &a);
        bool operator<=(Fixed const &a);
        bool operator!=(Fixed const &a);
        bool operator==(Fixed const &a);
        Fixed operator*(Fixed const &a);
        Fixed operator/(Fixed const &a);
        Fixed operator+(Fixed const &a);
        Fixed operator-(Fixed const &a);
        Fixed    &operator++();
        Fixed    operator++(int a);
        Fixed    &operator--();
        Fixed    operator--(int a);
        static Fixed &min(Fixed const &a,Fixed const &b);
        static Fixed &min(Fixed &a,Fixed &b);
        static Fixed &max(Fixed const &a,Fixed const &b);
        static Fixed &max(Fixed &a,Fixed &b);
};


std::ostream& operator<< (std::ostream& out, const Fixed& _Fixed);
Fixed &min(Fixed const &a,Fixed const &b);
Fixed &min(Fixed &a,Fixed &b);
Fixed &max(Fixed const &a,Fixed const &b);
Fixed &max(Fixed &a,Fixed &b);
#endif