#ifndef SPAN_H
#define SPAN_H

#include <vector>
#include <iostream>
#include <stdexcept>  

class Span {
private:
    unsigned int size; 
    std::vector<int> data;

public:
    
    Span();
    explicit Span(unsigned int n);
    Span(const Span &obj);
    Span &operator=(const Span &obj);

    
    ~Span();

    
    void addNumber(int n);
    int shortestSpan() const;
    int longestSpan() const;
};

#endif 
