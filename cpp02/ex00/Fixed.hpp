#ifndef FIXED_H
#define FIXED_H
#include <iostream>
class Fixed 
{
    private :
    int fixed_point ;
    static const int num_frac =8;
    public  :
    Fixed()  ;
    Fixed (Fixed &obj) ;
    Fixed& operator =(Fixed &obj) ;
    int getRawBits( void ) const ;
    void setRawBits( int const raw )  ;
    ~Fixed()  ;
    
} ;
#endif