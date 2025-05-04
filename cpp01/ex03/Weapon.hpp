
#ifndef  WEAPON_H
#define WEPON_H
#include <string>
#include <iostream>


class Weapon
{
    private :
    std :: string  type ;
    public :
    const std :: string  &getType() ;
    void setType(std :: string type) ; 
} ;
#endif