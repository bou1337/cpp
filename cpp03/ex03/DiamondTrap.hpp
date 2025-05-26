

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H
#include "FragTrap.hpp" 


class DiamondTrap :  public FragTrap , public ScavTrap
{
    private :
    std ::  string name ;
    public :
    DiamondTrap(std :: string name) ;
} ;


#endif