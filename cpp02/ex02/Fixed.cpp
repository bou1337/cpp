#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : fixed_point(0) {
    std :: cout<<"Default constructor called\n" ;
}

Fixed::Fixed(int n) : fixed_point(n << num_frac_bit) {
    std :: cout <<"Int constructor called\n" ;

}

Fixed::Fixed(float f) : fixed_point(static_cast<int>(f * (1 << num_frac_bit))) {
    std ::cout <<"Float constructor called\n" ;
}

Fixed::Fixed(const Fixed& obj) : fixed_point(obj.fixed_point) {
    std :: cout <<"Copy constructor called\n" ;
}

// Assignment operator
Fixed& Fixed::operator=(const Fixed& obj) {
    std :: cout <<"Copy assignment operator called\n" ;
    if (this != &obj) {
        fixed_point = obj.fixed_point;
    }
    return *this;
}

// Destructor
Fixed::~Fixed() {
    std :: cout <<"Destructor called\n" ;

}

// Conversion functions
float Fixed::toFloat() const {
    return static_cast<float>(fixed_point) / (1 << num_frac_bit);
}

int Fixed::toInt() const {
    return fixed_point >> num_frac_bit;
}

// Comparison operators
bool Fixed::operator>(const Fixed& obj) const {
    return fixed_point > obj.fixed_point;
}

bool Fixed::operator<(const Fixed& obj) const {
    return fixed_point < obj.fixed_point;
}

bool Fixed::operator>=(const Fixed& obj) const {
    return fixed_point >= obj.fixed_point;
}

bool Fixed::operator<=(const Fixed& obj) const {
    return fixed_point <= obj.fixed_point;
}

bool Fixed::operator==(const Fixed& obj) const {
    return fixed_point == obj.fixed_point;
}

bool Fixed::operator!=(const Fixed& obj) const {
    return fixed_point != obj.fixed_point;
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed& obj) const {
    Fixed result;
    result.fixed_point = fixed_point + obj.fixed_point;
    return result;
}

Fixed Fixed::operator-(const Fixed& obj) const {
    Fixed result;
    result.fixed_point = fixed_point - obj.fixed_point;
    return result;
}

Fixed Fixed::operator*(const Fixed& obj) const {
    Fixed result;
    result.fixed_point = (fixed_point * obj.fixed_point) >> num_frac_bit;
    return result;
}

Fixed Fixed::operator/(const Fixed& obj) const {
    if (obj.fixed_point == 0) {
        throw std::invalid_argument("Division by zero");
    }
    Fixed result;
    result.fixed_point = (fixed_point << num_frac_bit) / obj.fixed_point;
    return result;
}

// Increment/Decrement operators
Fixed& Fixed::operator++() {
    ++fixed_point;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    ++fixed_point;
    return temp;
}

Fixed& Fixed::operator--() {
    --fixed_point;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    --fixed_point;
    return temp;
}

// Static member functions for min/max
Fixed& Fixed::min(Fixed& obj1, Fixed& obj2) {
    return (obj1.fixed_point < obj2.fixed_point) ? obj1 : obj2;
}

const Fixed& Fixed::min(const Fixed& obj1, const Fixed& obj2) {
    return (obj1.fixed_point < obj2.fixed_point) ? obj1 : obj2;
}

Fixed& Fixed::max(Fixed& obj1, Fixed& obj2) {
    return (obj1.fixed_point > obj2.fixed_point) ? obj1 : obj2;
}

const Fixed& Fixed::max(const Fixed& obj1, const Fixed& obj2) {
    return (obj1.fixed_point > obj2.fixed_point) ? obj1 : obj2;
}

// Stream insertion operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
