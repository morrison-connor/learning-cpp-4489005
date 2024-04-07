// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    // celsius = ((float) 5 / 9.0) * (fahrenheit - 32)

    float weight = 10.99;
    std::cout << "Float" << weight << std::endl;
    std::cout << "Int" << (int) weight << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
