

#include "Zombie.hpp"

void Zombie ::set_name(std :: string s)
{
    name  =s ;
}


void  Zombie ::announce()
{
    std ::cout <<name<<": BraiiiiiiinnnzzzZ...\n" ;
}
Zombie ::~Zombie()
{
    std ::cout<<name<<": is destroyed\n"  ;
}