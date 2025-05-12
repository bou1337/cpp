
#include "Fixed.hpp"

Fixed  ::Fixed()
{
    fixed_point = 0  ;
    std ::cout <<"Default constructor called\n" ;
}

Fixed ::Fixed(Fixed &obj)
{
    fixed_point = obj.fixed_point ;
std :: cout <<"Copy assignment operator called\n"  ;
}
Fixed& Fixed::operator=(Fixed &obj)
{ 
    if(this !=&obj)
    {
    fixed_point = obj.fixed_point ;
    std ::cout <<"Copy assignment operator called\n" ;
    }
    return *this ;
}

int Fixed ::getRawBits() const
{
    std :: cout <<"getRawBits member function called\n" ;
    return fixed_point  ;
}

void Fixed ::setRawBits(int n)
{
    std :: cout <<"setRawBits member function called\n" ;
    fixed_point = n ;
}
Fixed ::~Fixed()
{
    std ::cout <<"Destructor called\n" ;
}

