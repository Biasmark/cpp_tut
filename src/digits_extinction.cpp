#include <cmath>
#include <iostream>
 using std :: cout; using std :: endl;
// float is not enough as one number is much bigger than the other
// use 'double' or 'long double' not to loose any important digits 
 int main () {
    float pi = M_PI;
    float big_number = 1e7;
    cout << "Pi before: " << pi << endl;
    pi += big_number ;
    pi -= big_number ;
    cout << "Pi after: " << pi << endl;
    cout << "Difference: " << M_PI - pi << endl;
    return 0;
}