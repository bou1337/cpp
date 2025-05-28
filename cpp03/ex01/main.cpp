

#include "ScavTrap.hpp"




int main()
{

    ScavTrap  obj("Scavtrap") ;
    obj.attack("target1") ;
    obj.beRepaired(20) ;
    //obj.print() ;
    ScavTrap obj1(obj) ;
    //obj1.print() ;
    obj1 = obj ;
    obj.guardGate() ;
}