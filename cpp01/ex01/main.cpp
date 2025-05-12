

#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name ) ;
int main()
{
    int N =5 ;
    Zombie   *z = zombieHorde(N ,"bou");
    for(int  i = 0 ; i<N ; i++)
    {
        z[i].announce() ;
    }
    delete[] z ;

   

}