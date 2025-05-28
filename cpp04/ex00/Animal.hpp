
#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>

class Animal
{
    protected :
    std :: string  type ;
    public :
    Animal(std :: string type) ;
    Animal() ;
    Animal(Animal &obj) ;
    ~Animal() ;
    Animal & operator=(Animal &obj) ;
} ;
#endif