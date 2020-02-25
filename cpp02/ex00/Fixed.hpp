/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:21:50 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:21:51 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



class Fixed
{
    private:
        int store;
        static const int frac = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &f);
        Fixed& operator=(Fixed const &a);
        int getRawBits( void ) const;
        void setRawBits( int const raw); 
};