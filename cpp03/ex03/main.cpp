

#include "DiamondTrap.hpp"


int  main()
{

    DiamondTrap obj("bou") ;
    obj.attack("target1") ;
    obj.beRepaired(30) ;
    obj.highFivesGuys() ;

    obj.whoAmI() ;
    obj.print() ;
    obj.takeDamage(1000) ;
    obj.attack("target2") ;
     obj.print() ;
}
