


#include "Serialization.hpp"
#include <iostream>

int main()
{
    Serialization  s ; 
    Data *ptr = new  Data() ;
    ptr->x =1337 ; 
    ptr->y = 42.42 ;
    std::cout<< ptr->x<<"-----"<<ptr->y<<"\n" ;
    std::cout<<"****************************************************************************************************\n" ;
    uintptr_t raw=s.serialize(ptr) ;
    Data  *new_data =  s.deserialize(raw)   ; 
    std::cout<< new_data->x <<"-------"<<new_data->y<<"\n" ; 

}