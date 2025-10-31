#ifndef MUTANT_H
#define MUTANT_H

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() {
        std::cout << "Default constructor called\n";
    }

    MutantStack(const MutantStack &obj):std::stack<T>()
{
    this->c = obj.c;
    std::cout << "Copy constructor called\n";
}

    MutantStack &operator=(const MutantStack &obj) {
        if (this != &obj) {
            this->c = obj.c;
        }
        std::cout << "Assignment operator called\n";
        return *this;
    }

    ~MutantStack() {
        std::cout << "Destructor called\n";
    }

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }
};

#endif
