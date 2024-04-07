// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

// #define AGE_LENGTH 4

int main(){
    const size_t AGE_LENGTH = 4;
    float temperature[] = {31.5, 32.7, 38.9};
    int age[AGE_LENGTH];
    age[0] = 25;
    age[1] = 25;
    age[2] = 25;
    age[3] = 25;
    std::cout << std::endl << std::endl;
    return (0);
}
