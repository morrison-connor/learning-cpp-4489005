// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>

// References: Variable alias
// References are not pointers & don't have an address
// Cannot be used for arrays or for other references
// References are good for copying large amounts of data, input parameters, etc.

// Vectors: Dynamic memory allocation done for you
// Generic types allowed

int main(){
    std::vector<int> primes;
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(4);
    primes.push_back(5);
    std::cout << "Vector has " << primes.size() << " elements" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
