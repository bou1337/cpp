
#include "ScavTrap.hpp"


ScavTrap :: ScavTrap(std ::string name)
{
    this->name = name ;
    Hit_point = 100 ;
    Energy_point = 50 ;
    Attack_damage = 20 ;
    std :: cout <<"ScavTrap's constructor called\n" ;
}

ScavTrap :: ScavTrap()
{
    Hit_point = 100 ;
    Energy_point = 50 ;
    Attack_damage = 20 ;
    
    std :: cout <<"ScavTrap's Default Constructor called\n" ;
} 

ScavTrap :: ScavTrap(ScavTrap &obj) : ClapTrap(obj)
{
    std :: cout <<"ScavTrap's copy constructor called\n" ;
}

ScavTrap & ScavTrap ::operator=(ScavTrap &obj)
{
    if (this != &obj) 
    {
    ClapTrap ::operator=(obj) ;
    }
    std :: cout <<"ScavTrap's assigment  operator called \n" ;
    return  *this ;   
} 
ScavTrap ::~ScavTrap()
{
    std :: cout <<"ScavTrap's Destructor called\n" ;
}

void  ScavTrap ::   guardGate()
{
    std :: cout <<"ScavTrap is now in Gate keeper mode\n" ;
}

void ScavTrap ::attack(const std::string& target)
{

    if(Hit_point<=0|| Energy_point<=0)
    std :: cout <<"ScavTrap can't do  anything\n" ;
    else
    { 
    std :: cout <<"Scavtrap "<<name<<" attacks " <<target <<". causing "<<Attack_damage<<" points of damage!\n" ;
    Energy_point-- ;
    }
}
