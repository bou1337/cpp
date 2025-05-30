

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i ;
    //Animal z ;
    int SIZE = 10;
    Animal* animals[SIZE];

    for (int i = 0; i < SIZE / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = SIZE / 2; i < SIZE; ++i) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < SIZE; ++i) {
        animals[i]->makeSound();
    }

    for (int i = 0; i < SIZE; ++i) {
        delete animals[i]; 
    }

    return 0;
}
