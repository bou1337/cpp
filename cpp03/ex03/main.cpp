

#include "DiamondTrap.hpp"


int  main()
{
    DiamondTrap obj0("obj0") ;
    DiamondTrap obj("bou") ;
    obj.attack("target1") ;
    obj.beRepaired(30) ;
    obj.highFivesGuys() ;
   // DiamondTrap obj1 ;
    obj.whoAmI() ;
  //  obj.print() ;
    obj.takeDamage(1000) ;
    obj.attack("target2") ;
    // obj.print() ;
      DiamondTrap obj1 ;
      obj1 = obj0  ;
       obj1.whoAmI() ;
       DiamondTrap obj4(obj0) ;
       obj4.whoAmI() ;
}
