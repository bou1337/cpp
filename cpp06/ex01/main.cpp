#include "Serialization.hpp"
#include <iostream>

int main()
{
    Data* ptr = new Data();
    ptr->x = 1337;
    ptr->y = 42.42;
    
    std::cout << "x = " << ptr->x << " | y = " << ptr->y << std::endl;

    std::cout << "****************************************************" << std::endl;

    uintptr_t raw = Serialization::serialize(ptr);
    Data* new_data = Serialization::deserialize(raw);
    std::cout << "x = " << new_data->x << " | y = " << new_data->y << std::endl;

    delete ptr;
    return 0;
}
