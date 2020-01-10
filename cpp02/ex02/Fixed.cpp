#include "Fixed.hpp"

#include <cmath>


Fixed &Fixed::operator=(Fixed const &a)
{
    //std::cout << "Assignation operator called" << std::endl;
    this->store = a.store;
    return *this;
}

Fixed::Fixed()
{
   // std::cout << "Default constructor called" << std::endl;
    this->store = 0;
}
Fixed::~Fixed()
{
  // std::cout << "Default destructor called" << std::endl; 
}
Fixed::Fixed(Fixed const &f)
{
   // std::cout << "Copy constructor called" << std::endl; 
    this->store = f.store;
}

int Fixed::getRawBits( void ) const
{
   // std::cout << "getRawBits member function called" << std::endl; 
    return (this->store);
}
void Fixed::setRawBits( int const raw)
{
    //std::cout << "setRawBits member function called" << std::endl; 
    this->store = raw;
}

Fixed::Fixed(int const &val)
{
    this->store = val << this->frac;

}
Fixed::Fixed(float const &val)
{
    int go = 1 << this->frac; 
    this->store = roundf(val * go);
}

float Fixed::toFloat( void ) const
{
    int go = 1 << this->frac;
    return (static_cast<float>(this->store) / go);
}
int Fixed::toInt( void ) const
{
        return static_cast<int>(this->store >> this->frac);
}

std::ostream& operator<< (std::ostream& out, const Fixed& _Fixed)
{
    out << _Fixed.toFloat();
    return (out);
}


bool Fixed::operator<(Fixed const &a)
{
    return (this->toFloat() < a.toFloat());
}
bool Fixed::operator>(Fixed const &a)
{
    return (this->toFloat() > a.toFloat());
}
bool Fixed::operator>=(Fixed const &a)
{
    return (this->toFloat() >= a.toFloat());
}
bool Fixed::operator<=(Fixed const &a)
{
    return (this->toFloat() <= a.toFloat());
}
bool Fixed::operator!=(Fixed const &a)
{
    return (this->toFloat() != a.toFloat());
}
bool Fixed::operator==(Fixed const &a)
{
    return (this->toFloat() == a.toFloat());
}
Fixed Fixed::operator*(Fixed const &a)
{
    Fixed b(this->toFloat() * a.toFloat());
    *this = b;
    return (*this);
}
Fixed Fixed::operator/(Fixed const &a)
{
    Fixed b(this->toFloat() / a.toFloat());
    *this = b;
    return (*this);
}
Fixed Fixed::operator+(Fixed const &a)
{
    Fixed b(this->toFloat() + a.toFloat());
    *this = b;
    return (*this);
}
Fixed Fixed::operator-(Fixed const &a)
{
    Fixed b(this->store - a.toFloat());
    *this = b;
    return (*this);
}
Fixed &Fixed::operator++()
{
    this->store = this->store + 1;
    return (*this);
}
Fixed Fixed::operator++(int a)
{
    Fixed b(*this);
    a = 0;
    this->store = this->store + 1;
    return b;
}
Fixed &Fixed::operator--()
{
    this->store = this->store - 1;
    return (*this);
}
Fixed Fixed::operator--(int a)
{
    Fixed b(*this);
    a = 0;
    this->store = this->store - 1;
    return b;    
}
Fixed &Fixed::max(Fixed &a,Fixed &b)
{
    if (a <= b)
        return b;
    else 
        return a;
}
Fixed &Fixed::min(Fixed &a,Fixed &b)
{
    if (a <= b)
        return a;
    else 
        return b;
}
Fixed &Fixed::min(Fixed const &a,Fixed const &b)
{
    Fixed c(a);
    Fixed d(b);
    return min(c,d);
}

Fixed &Fixed::max(Fixed const &a,Fixed const &b)
{
    Fixed c(a);
    Fixed d(b);
    return max(c,d);    
}
