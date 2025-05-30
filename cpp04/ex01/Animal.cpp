#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal's default constructor called\n";
}

Animal::~Animal() {
    std::cout << "Animal's destructor called\n";
}

Animal::Animal(const Animal &obj) {
    type = obj.type;
    std::cout << "Animal's copy constructor called\n";
}

Animal &Animal::operator=(const Animal &obj) {
    std::cout << "Animal's assignment operator called\n";
    if (this != &obj) {
        type = obj.type;
    }
    return *this;
}

void Animal::makeSound() const {
    std::cout << "Animal sound\n";
}

std::string Animal::getType() const {
    return type;
}
