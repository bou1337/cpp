#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat's Default Constructor called\n";
}

Cat::Cat(const Cat &obj) : Animal(obj) {
    std::cout << "Cat's Copy constructor called\n";
    
}

Cat &Cat::operator=(const Cat &obj) {
    std::cout << "Cat's assignment operator called\n";
    if (this != &obj) {
        Animal::operator=(obj); 
    
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat's Destructor called\n";
}

void Cat::makeSound() const {
    std::cout << "Meow\n";
}
