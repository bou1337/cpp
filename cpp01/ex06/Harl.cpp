#include "Harl.hpp"
#include <iostream>

void Harl::debug() {
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n\n";
}

void Harl::info() {
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money.\n\n";
}

void Harl::warning() {
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free.\n";
    std::cout << "I've been coming for years whereas you started working here since last month.\n\n";
}

void Harl::error() {
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable, I want to speak to the manager now.\n\n";
}

void Harl::complain(std::string level) {
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*functions[])() = {
        &Harl::debug, &Harl::info, &Harl::warning, &Harl::error
    };
    int i = -1;
    for (int j = 0; j < 4; ++j) {
        if (level == levels[j]) {
            i = j;

            break;
        }
    }
    switch (i) {
        case 0:
            (this->*functions[0])();
            break;
        case 1:
            (this->*functions[1])();
            break;
        case 2:
            (this->*functions[2])();
            break;
        case 3:
            (this->*functions[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    
    
    
}
