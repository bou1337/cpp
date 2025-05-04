

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{   
    if(N<=0)
    return nullptr ;
    Zombie *tab = new Zombie[N];
    if(!tab) 
    return nullptr ;
    for(int i = 0 ; i<N ;i++)
    tab[i].set_name(name) ;
    return tab ;
}