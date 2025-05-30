
#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructed\n";
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain copy constructed\n";
    *this = other;
}

Brain::~Brain() {
    std::cout << "Brain destroyed\n";
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain assigned\n";
    for (int i = 0; i < 100; ++i)
        ideas[i] = other.ideas[i];
    return *this;
}

void Brain::setIdea(int index, const std::string& idea) {
    if (index >= 0 && index < 100)
        ideas[index] = idea;
    else 
        std::cerr <<"Index out of range:\n" ;
}

std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100)
        return ideas[index];
    else 
        std::cerr <<"Index out of range:\n" ;
    return "";
}
