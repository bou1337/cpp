
#ifndef SERIALIZATION_H
#define SERIALIZATION_H 
#include <stdint.h>
typedef struct  s_data
{
    int x ; 
    double y  ; 
}Data;

 class Serialization
 {  public :
    Serialization() ;
    Serialization(Serialization &obj) ; 
    Serialization & operator=(Serialization &obj) ;
    ~Serialization()  ; 
    static  uintptr_t serialize(Data* ptr) ;
    Data* deserialize(uintptr_t raw); 
 } ;

#endif