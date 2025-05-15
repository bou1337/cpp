

#ifndef FIXED_H
#define FIXED_H
#include <iostream>
class Fixed {
private:
    int fixed_point;
    static const int num_frac_bit = 8;

public:
    Fixed();
    Fixed(const int n);
    Fixed(const float f);
    Fixed(const Fixed &obj); 
    Fixed& operator=(const Fixed &obj); 
    ~Fixed();
    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed)  ;

    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif