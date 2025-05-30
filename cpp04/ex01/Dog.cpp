#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog's default constructor called\n";
}

Dog::Dog(const Dog &obj) : Animal(obj) {
    std::cout << "Dog's copy constructor called\n";
}

Dog &Dog::operator=(const Dog &obj) {
    std::cout << "Dog's assignment operator called\n";
    if (this != &obj) {
        Animal::operator=(obj); 
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog's destructor called\n";
}

void Dog::makeSound() const {
    std::cout << "Woof\n";
}
