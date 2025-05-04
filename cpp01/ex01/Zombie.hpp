

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>
#include <iostream>
class Zombie
{
    private  :
    std :: string name ;

    public :
    void set_name(std :: string str) ;
    void announce()  ;
    ~Zombie() ;
} ;
#endif