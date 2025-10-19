#include "Span.hpp"
#include <algorithm>
#include <limits>
#include <iostream>

Span::Span() : size(0) {
    std::cout << "Default constructor called\n";
}

Span::Span(unsigned int n) : size(n) {
    std::cout << "Constructor called\n";
}

Span::Span(const Span &obj)
    : size(obj.size), data(obj.data)
{
    std::cout << "Copy constructor called\n";
}

Span &Span::operator=(const Span &obj) {
    if (this != &obj) {
        size = obj.size;
        data = obj.data;
    }
    return *this;
}

Span::~Span() {
    std::cout << "Destructor called\n";
}

void Span::addNumber(int n) {
    if (data.size() >= size)
        throw std::runtime_error("Span is already full");
    data.push_back(n);
}

int Span::shortestSpan() const {
    if (data.size() < 2)
        throw std::runtime_error("Not enough elements to find a span");

    std::vector<int> sorted = data;
    std::sort(sorted.begin(), sorted.end());

    int minSpan =sorted[1] -sorted[0];
    for (size_t i = 1; i < sorted.size(); ++i) {
        int diff = sorted[i] - sorted[i - 1];
        if (diff < minSpan)
            minSpan = diff;
    }
    return minSpan;
}

int Span::longestSpan() const {
    if (data.size() < 2)
        throw std::runtime_error("Not enough elements to find a span");

    int maxVal = *std::max_element(data.begin(), data.end());
    int minVal = *std::min_element(data.begin(), data.end());
    return maxVal - minVal;
}
