#include <string>
#include <iostream>
#include "Declaration_Definition.h"

// int sum( int a, int b){  // Slow  .. copy the reference 
//     return a+b;
// }

int sum(const int a,const int b){  // Faster  .. pass by reference
    return a+b;
}
void PassReference(const std::string& inputargument){
    std::cout << inputargument << std::endl;
}