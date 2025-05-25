


#include "ClapTrap.hpp"



int  main()
{

    ClapTrap clap ;
    clap.attack("target") ;
    clap.beRepaired(20) ;
    clap.takeDamage(1) ;
    clap.print() ;
    std :: cout<<"********************************************\n" ;
    ClapTrap clap1(clap)  ;
     clap1.attack("target1") ;
    clap1.beRepaired(20) ;
    clap1.takeDamage(30) ;
     clap1.print() ;
     std :: cout <<"***************************************\n" ;
     clap1 = clap ;
     clap1.attack("target") ;
    clap1.beRepaired(0) ;
    clap1.takeDamage(0) ;
    clap1.print() ;

 ;}
