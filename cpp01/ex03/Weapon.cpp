#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : type(type) {}

const std::string& Weapon::getType() const {
    return this->type;
}

void Weapon::setType(const std::string& newType) {
    this->type = newType;
}
