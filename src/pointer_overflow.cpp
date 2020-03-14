#include <iostream>
int main () {
 int ar[] = {1, 2, 3};
 // WARNING! Iterating too far!
 // as array is like a pointer, it does not have any information about size of the array. 
 //so it will keep run outside of the array size 
 for (int i = 0; i <6; i++){
 std :: cout << i << ": value: " << ar[i]
 << "\t addr:" << &ar[i] << std :: endl;
 }
 return 0;
 }