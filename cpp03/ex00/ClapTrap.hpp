
#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <string>
#include <iostream>

class ClapTrap
{
    private :
    long long Hit_point  ;
    long long Energy_point ; 
    long long Attack_damage  ;
    std :: string name ;
    public :
    ClapTrap(std ::string name) ;
    ClapTrap();
    ClapTrap(ClapTrap &obj) ;
    ClapTrap & operator=(ClapTrap &obj) ;
    ~ClapTrap() ;
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    // void print()
    // {
    //     std :: cout <<"Hit_point= "<<Hit_point<<"///////////Attack_damage="<<Attack_damage<<"////////////Energy_point="<<Energy_point<<"//////\n" ;
    // }
} ;
#endif