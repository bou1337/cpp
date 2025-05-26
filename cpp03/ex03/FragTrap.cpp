
#include "FragTrap.hpp"



FragTrap ::FragTrap() 
{
    Hit_point = 100 ;
    Energy_point = 100 ;
    Attack_damage = 30 ;
    std :: cout <<"FragTrap's default constructor called \n" ;
}


FragTrap ::FragTrap(std :: string name)
{   
    this->name = name ;
    Hit_point = 100 ;
    Energy_point = 100 ;
    Attack_damage = 30 ;
    std :: cout <<"FragTrap's constructor called\n" ;
}


FragTrap ::FragTrap(FragTrap &obj):ClapTrap(obj) 
{
    std :: cout <<"FragTrap's Copy constructor called \n" ;
}


FragTrap&  FragTrap::operator=(FragTrap &obj)
{
    ClapTrap::operator=(obj) ;
    std :: cout<<"FragTrap's operator assignment called\n" ;
    return *this ;
}

FragTrap ::~FragTrap()
{
    std :: cout <<"FragTrap's destructor called \n" ;
}


void FragTrap :: highFivesGuys(void)
{
  std::cout << "High five, guys!" <<"\n";   
}