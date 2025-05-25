

#include "ClapTrap.hpp"

ClapTrap ::ClapTrap(std :: string name)
{
    this ->name = name ;
    Hit_point = 10 ;
    Energy_point = 10 ;
    Attack_damage = 0 ;
    std ::cout <<"ClapTrap's constructor called\n" ;

}

ClapTrap::ClapTrap()
{
    Hit_point = 10 ;
    Energy_point = 10 ;
    Attack_damage = 0 ;
    std :: cout <<"ClapTrap's default constructor called\n" ;
}

ClapTrap :: ClapTrap(ClapTrap &obj)
{
    this->Hit_point = obj.Hit_point ;
    this->Energy_point = obj.Energy_point ;
    this->Attack_damage = obj.Attack_damage ;
    this->name = obj.name ;
    std :: cout <<"ClapTrap's Copy Constructor called\n" ;
}


ClapTrap& ClapTrap ::operator=(ClapTrap&obj)
{
    
    this->Hit_point = obj.Hit_point ;
    this->Energy_point = obj.Energy_point ;
    this->Attack_damage = obj.Attack_damage ;
    this->name = obj.name ;
    std :: cout <<"ClapTrap's assignment operator called \n" ;
    return  *this   ;
}
ClapTrap ::~ClapTrap()
{
    std ::  cout <<"ClapTrap's Destructor called\n" ;
}


void ClapTrap :: attack(const std::string& target)
{
    if(Hit_point<=0|| Energy_point<=0)
    std :: cout <<"ClapTrack can't do  anything\n" ;
    else
    { 
    std :: cout <<"ClapTrap "<<name<<" attacks " <<target <<". causing "<<Attack_damage<<" points of damage!\n" ;
    Energy_point-- ;
    }
}

void ClapTrap ::takeDamage(unsigned int amout)
{
     if(Hit_point<=0|| Energy_point<=0)
    std :: cout <<"ClapTrack can't do  anything\n" ;
    else 
    {
        if(Hit_point<-__LONG_LONG_MAX__ +amout)
        {
        std :: cout <<"Hit_point can't be less than min long long\n" ;
        return ; 
        }
        Hit_point = Hit_point-amout ;
        std ::cout <<"ClapTrap take Damage\n" ;
    }
}

void ClapTrap ::beRepaired(unsigned int amount)
{
      if(Hit_point<=0|| Energy_point<=0)
      std :: cout <<"ClapTrack can't do  anything\n" ;
      else 
      {
    
        if(Hit_point >__LONG_LONG_MAX__ - amount)
        {
        std :: cout <<"Hit_point can't be more than max long long\n" ;
        return ;
        }
        Energy_point-- ;
        Hit_point = Hit_point+amount ;
        std :: cout <<"ClapTrap Repaired\n" ;
      }
}
