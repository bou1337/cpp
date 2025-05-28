

#include "DiamondTrap.hpp"


DiamondTrap :: DiamondTrap(std ::string name)  : ClapTrap(name+"_clap_name")
{
    this ->name  = name ;
    Hit_point = FragTrap::Hit_point ;
    Energy_point = ScavTrap::Energy_point ;
    Attack_damage = FragTrap::Attack_damage ;
    std :: cout <<"DiamondTrap's constructor called\n" ;
} 

DiamondTrap ::DiamondTrap()
{
    this ->name  = name ;
    Hit_point = FragTrap::Hit_point ;
    Energy_point = ScavTrap::Energy_point ;
    Attack_damage = FragTrap::Attack_damage ;
    std :: cout <<"Diamondtrap's default constructor called\n" ;
}

DiamondTrap ::DiamondTrap(DiamondTrap &obj) : ClapTrap(obj) 
{
    std :: cout <<"DiamondTrap's copy constructor called \n" ;
}

DiamondTrap  & DiamondTrap::operator=(DiamondTrap &obj) 
{
    ClapTrap ::operator=(obj) ;
    std :: cout <<"DiamondTrap's  copy assignment called\n" ;
    return *this ;
}

DiamondTrap ::~DiamondTrap()
{
    std :: cout <<"DiamondTrap's Destructor called\n" ;
}

void DiamondTrap ::whoAmI()
{
    std :: cout <<"DiamondTrap's name: "<<name <<" ClapTrap's name: "<<ClapTrap::name<<"\n" ;
} 
