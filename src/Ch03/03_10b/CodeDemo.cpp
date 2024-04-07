// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> cattle;

    cattle.push_back(cow("betty", 5, cow.purpose::dairy));
    cattle.push_back(cow("a", 6, cow.purpose::dairy));
    std::cout << (cattle.end() - 1).get_name()) << std::endl;  // cattle.end gives you the iterator, which acts like a pointer within the vector
    return (0);
}
