
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() {
    fixed_point = 0;
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int n) {
    fixed_point = n *256;
    std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float f) {
    fixed_point = roundf(f *256);
    std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &obj) {
    std::cout << "Copy constructor called\n";
    fixed_point = obj.fixed_point;
}
    
Fixed& Fixed::operator=(const Fixed &obj) {
std::cout << "Copy assignment operator called\n";
    if (this != &obj)
        fixed_point = obj.fixed_point;
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

float Fixed::toFloat(void) const {
    return fixed_point/256.0 ;
}

int Fixed::toInt(void) const {
    return fixed_point/256 ;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}


bool Fixed::operator>(Fixed &obj)
{
    return this->fixed_point >obj.fixed_point ;
}
bool Fixed:: operator<(Fixed &obj) 
{
    return this->fixed_point<obj.fixed_point ;
}
bool Fixed:: operator>=(Fixed &obj)
{
    return this->fixed_point >=obj.fixed_point ;
}
bool Fixed ::operator<=(Fixed &obj)
{
    return  this->fixed_point <= obj.fixed_point ;
}
bool Fixed ::operator==(Fixed &obj)
{
    return this->fixed_point == obj.fixed_point ;
}
bool Fixed ::operator!=(Fixed &obj)
{
    this->fixed_point!=obj.fixed_point ;
}
