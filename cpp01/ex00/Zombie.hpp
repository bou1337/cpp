
#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie 
{
    private :
    std ::string name ;
    public :
    void announce( void ) ;
    Zombie(std :: string s);
    ~Zombie() ;
} ;
#endif