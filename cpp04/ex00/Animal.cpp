
#include "Animal.hpp"


Animal ::Animal()
{
    type = "Animal" ;
    std :: cout <<"Animal's default constructor called\n" ;
}
Animal ::~Animal()
{
    std :: cout <<"Animal's Destructor called\n" ;
}
Animal &Animal ::operator=(Animal &obj)
{
    
}