#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
private:
    T *data;
    unsigned int size;

public:
    
    Array() : data(nullptr), size(0)
    {
        std::cout << "Default constructor called\n";
    }

    Array(unsigned int n) : data(nullptr), size(n)
    {
        if (n > 0)
            data = new T[n]; 
        std::cout << "Constructor called\n";
    }
    Array(const Array &obj) : data(nullptr), size(obj.size)
    {
        if (obj.size > 0)
        {
            data = new T[obj.size];
            for (unsigned int i = 0; i < size; ++i)
                data[i] = obj.data[i]; 
        }
        std::cout << "Copy constructor called\n";
    }

    Array &operator=(const Array &obj)
    {
        if (this != &obj) 
        {
            delete[] data;
            size = obj.size;

            if (size > 0)
            {
                data = new T[size];
                for (unsigned int i = 0; i < size; ++i)
                    data[i] = obj.data[i];
            }
            else
            {
                data = nullptr;
            }
        }
        std::cout << "Assignment operator called\n";
        return *this;
    }

    T &operator[](unsigned int index)
    {
        if (index >= size)
            throw std::out_of_range("Index out of bounds");
        return data[index];
    }
    
    unsigned int size_fnc() const
    {
        return size;
    }

    ~Array()
    {
        delete[] data;
        data = nullptr;
        std::cout << "Destructor called\n";
    }
};

#endif
