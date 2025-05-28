
#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
    ScavTrap(std :: string name) ;
    ScavTrap() ;
    ScavTrap(ScavTrap &obj) ;
    ScavTrap & operator=(ScavTrap &obj) ;
    ~ScavTrap() ;
    void attack(const std::string& target);
    void guardGate();
} ;
#endif
