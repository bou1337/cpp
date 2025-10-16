#ifndef SERIALIZATION_H
#define SERIALIZATION_H

#include <stdint.h>

struct Data
{
    int x;
    double y;
};

class Serialization
{
    private:
    Serialization();
    Serialization(const Serialization& obj);
    Serialization& operator=(const Serialization& obj);
    ~Serialization();
    public :
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif
