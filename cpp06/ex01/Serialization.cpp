

#include "Serialization.hpp"


Serialization::Serialization()
{ }
Serialization & Serialization::operator=(Serialization &obj)
{   (void)obj ;
    return  *this ;
}

Serialization::Serialization(Serialization &obj){
    (void)obj ;
}
Serialization::~Serialization()
{ }
uintptr_t  Serialization::serialize(Data *ptr)
{
    return  (uintptr_t)ptr ;  
} 

Data *  Serialization::deserialize(uintptr_t raw)
{
    return (Data*)raw ; 
} 
