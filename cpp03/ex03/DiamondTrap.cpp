

#include "DiamondTrap.hpp"



DiamondTrap ::DiamondTrap(std ::string name) :
{
    this ->name = name ;
    Hit_point = FragTrap::Hit_point ;
    Energy_point = ScavTrap::Energy_point ;
    Attack_damage =  FragTrap::Attack_damage ; 
}