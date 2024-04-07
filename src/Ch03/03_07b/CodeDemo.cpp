// Learning C++ 
// Exercise 03_07
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"

int main(){
    cow *my_cow;  // pointer to the cow object (not an object itself)
    
    my_cow = new cow("Hildy", 3, cow_purpose::hide);
    std::cout << (*my_cow).get_name() << " is a type-" << (int) my_cow->get_purpose() << " cow." << std::endl;  // parenthesis de-references the pointer, or right-arrow accesses member
    std::cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << std::endl;
    delete my_cow;  // frees the memory at the pointer (dynamic memory allocation)
    std::cout << std::endl << std::endl;
    return (0);
}
