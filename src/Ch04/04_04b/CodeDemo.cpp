// Learning C++ 
// Exercise 04_04
// For Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    float average;

    average = 0.0f;
    for (auto x : numbers){  // python-esque iteration, new form. Takes type with auto
        average += x;
    }
    average /= numbers.size();
    
    std::cout << std::endl << std::endl;
    return (0);
}
