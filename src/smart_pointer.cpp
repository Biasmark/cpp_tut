// Only use smart pointer with Heap memory, 
// cannot use it with stack memory(e.g. int, float ..etc)
// Unique pointer cannot be copied, but it can be moved(unique)
// Shared pointer can be copied, stores a suage counter and a row pointer. 
// 
#include <iostream>
#include <memory>

 class A {
    public:
        int a = 10;
 };

class B {
    public:
        B(int b) { std :: cout << "I'm alive!\n"; }
        ~B() { std :: cout << "I'm dead... :(\n"; }
 };


 int main () {
    auto a_ptr = std :: unique_ptr <A>(new A);
    std :: cout << a_ptr->a << std :: endl;
    auto b_ptr = std :: move(a_ptr);
    std :: cout << b_ptr->a << std :: endl;

    auto c_ptr = std :: make_shared <B>(10);
    std :: cout << c_ptr. use_count() << std :: endl;
    {
    auto d_ptr = c_ptr;
    std :: cout << c_ptr. use_count () << std :: endl;
    } // d_ptr is deleted once we exit the {} curly bracket. 
    std :: cout << "Back to main scope\n";
    std :: cout << c_ptr. use_count () << std :: endl;

 return 0;
 }