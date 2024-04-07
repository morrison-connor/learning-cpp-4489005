// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

// old school enum: enum cow_purpose {dairy, meat, hide, pet};  // assigned sequential int values to each variable, starting at 0
// can't do this: enum grocery_section {canned, frozen, meat, laundry, dairy, bakery};

enum class cow_purpose {dairy, meat, hide, pet};
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery};

int main(){
    int meat = 8;
    int a;

    a = (int)cow_purpose::meat;  // int casting required because enum classes are strongly typed

    std::cout << "a = " << a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
