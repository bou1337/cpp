

#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name ) ;
int main()
{
    int N =5 ;
    Zombie *tab = zombieHorde(N,"zombie") ;
    for(int i  = 0 ; i<N ;i++)
    {
    if(tab)
    tab[i].announce() ;
    
    }
    if(tab)
    delete[] tab ;
   

}