#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(const Animal &obj);
    virtual ~Animal();
    Animal &operator=(const Animal &obj);
    virtual void makeSound() const = 0;
    std::string getType() const;
};

#endif
