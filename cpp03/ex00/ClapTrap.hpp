
#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <string>
#include <iostream>
class ClapTrap
{

    private :
    std :: string name ; 
    long long  Hit_points ;
    long long Energy_points ;
    long long Attack_damage ;

    public :
    ClapTrap(std :: string name) ;
    void attack(const std::string& target) ;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap() ;
} ;
#endif