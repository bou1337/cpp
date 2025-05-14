
#include "ClapTrap.hpp"



ClapTrap ::ClapTrap(std ::string name)
{
    this->name = name ;
    Hit_points = 10 ;
    Energy_points = 10 ;
    Attack_damage = 0 ;
    std :: cout <<"Constructor is called\n" ;
}

ClapTrap ::~ClapTrap()
{
    std :: cout <<"Destructor is called\n" ;
}

void ClapTrap:: attack(const std::string& target)
{
    if(Hit_points<=0 || Energy_points<=0)
    {
        std :: cout <<"no hit point or energy point\n" ;
    }
    else 
    {
        Energy_points-- ;
        std :: cout <<"ClapTrap "<<name<<" attacks "<<target<<", causing "<<Attack_damage<< " points of damage\n" ;
    }
}

void ClapTrap::  takeDamage(unsigned int amount)
{
    if (Hit_points == 0) {
        std::cout << name << " has no hit points left!" << std::endl;
        return;
    }
    Hit_points = (amount >= Hit_points) ? 0 : Hit_points - amount;
    std::cout << name << " takes " << amount << " points of damage! Hit points left: " << Hit_points << std::endl;
}

    void ClapTrap:: beRepaired(unsigned int amount) {
        if (Hit_points == 0 || Energy_points == 0) {
            std::cout << name << " is unable to repair itself due to lack of hit points or energy!" << std::endl;
            return;
        }
        Energy_points--;
        Hit_points += amount;
        std::cout << name << " repairs itself, restoring " << amount << " hit points! Total hit points: " << Hit_points << std::endl;
    }