#ifndef FIXED_H
#define FIXED_H
#include <iostream>

class Fixed {
private:
    int fixed_point;
    static const int num_frac_bit = 8;

public:

    Fixed();
    Fixed(int n);
    Fixed(float f);
    Fixed(const Fixed& obj); 

    Fixed& operator=(const Fixed& obj); 

    ~Fixed();
    float toFloat() const;
    int toInt() const;
    bool operator>(const Fixed& obj) const;
    bool operator<(const Fixed& obj) const;
    bool operator>=(const Fixed& obj) const;
    bool operator<=(const Fixed& obj) const;
    bool operator==(const Fixed& obj) const;
    bool operator!=(const Fixed& obj) const;
    Fixed operator+(const Fixed& obj) const;
    Fixed operator-(const Fixed& obj) const;
    Fixed operator*(const Fixed& obj) const;
    Fixed operator/(const Fixed& obj) const;
    Fixed& operator++();     
    Fixed operator++(int);   
    Fixed& operator--();     
    Fixed operator--(int);  
    static Fixed& min(Fixed& obj1, Fixed& obj2);
    static const Fixed& min(const Fixed& obj1, const Fixed& obj2);
    static Fixed& max(Fixed& obj1, Fixed& obj2);
    static const Fixed& max(const Fixed& obj1, const Fixed& obj2);
    //////////////////////////////////////////
    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};

#endif
