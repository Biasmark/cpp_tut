#include <iostream>
#include "Declaration_Definition.h"

int main(){
 std::cout << "hellow word" << std::endl;
 int a=2 ; // "a" is an lvalue
 int& a_ref = a; // "a" is an lvalue

 int b = a+2; // "b" is an lvalue, "a+2 " is an rvalue
 // std::move  is used to explicitly convert an lvalue to an rvaue 
 int && c = std::move(a); //"c" is an rvalue
 
//  std::cout << sum(a,b) << std::endl;
 std::cout << "End of the program" << std::endl;

 


 
}