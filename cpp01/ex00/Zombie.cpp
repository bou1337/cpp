
#include "Zombie.hpp"

Zombie ::Zombie(std ::string s)
{
    name = s ;
}

void  Zombie ::announce()
{
    std ::cout <<name<<": BraiiiiiiinnnzzzZ...\n" ;
}
Zombie ::~Zombie()
{
    std ::cout<<name<<": is destroyed\n"  ;
}