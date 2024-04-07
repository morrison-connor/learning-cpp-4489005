// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66;
    sgn = flt; // implicit type conversion
    unsgn = sgn; // no implicit type conversion - converts to two's complement

    std::cout << flt << std::endl;
    std::cout << sgn << std::endl;
    std::cout << unsgn << std::endl << (int32_t) unsgn << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
