

#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name ) ;
int main()
{
    int N =5 ;
    Zombie   *z = zombieHorde(N ,"bou");
    delete z ;

   

}