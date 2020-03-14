//If we use smart pointer such as unique or shared pointer, the below problem will not occure. 

// Memory leak : memory allocated on Heap access to which has been lost.

#include <iostream>
#include <cmath>
#include <algorithm>

 using std :: cout; using std :: endl;

void memory_leak1(){
    double *ptr_1 = NULL;
    double *ptr_2 = NULL;
    int size = 10;
    // Allocate memory for two arrays on the heap.
    ptr_1 = new double[size];
    ptr_2 = new double[size];
    cout << "1: " << ptr_1 << " 2: " << ptr_2 << endl;
    ptr_2 = ptr_1;
    // ptr_2 overwritten , no chance to access the memory.
    cout << "1: " << ptr_1 << " 2: " << ptr_2 << endl;
    delete[] ptr_1;
    // ptr_1 already clear the memory, so it cannot delete it again. (double free corruption)
    delete[] ptr_2;

}

// below memory_leak2 example shows how we can create waste of memory that we cannot track any further...
// we can check the memory usage by using 'htop'
void memory_leak2(){
 double *data = nullptr;
 size_t size = pow (1024 , 3) / 8; // Produce 1GB
 for (int i = 0; i < 3; ++i) {
 // Allocate memory for the data.
 data = new double[size ];
 std :: fill(data , data + size , 1.23);
 // Do some important work with the data here.
 cout << "Iteration: " << i << " done!" << endl;
 }
 // This will only free the last allocation!
 delete[] data;
 int unused; std :: cin >> unused; // Wait for user.
}

// when multiple pointer shares the same memory, one can delete the memory. 
// So the other pointers cannot find the data anymore.  
void dangling_pointer_example(){

    int size = 5;
    int *ptr_1 = new int[size ];
    int *ptr_2 = ptr_1; // Point to same data!
    ptr_1 [0] = 100; // Set some data.
    cout << "1: " << ptr_1 << " 2: " << ptr_2 << endl;
    cout << "ptr_2[0]: " << ptr_2 [0] << endl;
    delete[] ptr_1; // Free memory.
    ptr_1 = nullptr;
    cout << "1: " << ptr_1 << " 2: " << ptr_2 << endl;
    // Data under ptr_2 does not exist anymore!
    cout << "ptr_2[0]: " << ptr_2 [0] << endl;
 
}


 int main () {
   memory_leak1();
   memory_leak2();
   dangling_pointer_example();
    return 0;
 }

