

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H
#include "FragTrap.hpp" 


class DiamondTrap : public ScavTrap , public FragTrap 
{
     private :
     std ::  string name ;
     public :
     DiamondTrap(std :: string name) ;
     DiamondTrap() ;
     DiamondTrap(DiamondTrap &obj) ;
     DiamondTrap & operator=(DiamondTrap &obj) ;

     ~DiamondTrap() ;
     void whoAmI();
    // void attack(std ::string target) ;
     void print()
     {
        std :: cout <<"Name="<<name<<" Hit_point=" <<Hit_point <<" Energy_point="<<Energy_point<<" Attack_damage="<<Attack_damage<<"\n" ;
     }
} ;
#endif
