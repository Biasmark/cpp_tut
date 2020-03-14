#include <math.h>
#include <iostream>

 using std :: cout; 
 using std :: endl;

 class Point {
    public:
    Point(int x, int y) : x_(x), y_(y) {}
    // static variable cannot be initialized inside of the class, 
    // it must be initialized outside of the class. 
    static int point_count;
    // static is not bound to the individual object, but titled to the class itself. 
    static float dist(const Point& a, const Point& b) {
    int diff_x = a.x_ - b.x_;
    int diff_y = a.y_ - b.y_;
    return sqrt(diff_x * diff_x + diff_y * diff_y);
    }  
    
    private:
    int x_ = 0; int y_ = 0;    
};
    // this is how static variable is initialized outside of the class. 
    int Point::point_count = 10;

 int main () {
 Point a(2, 2), b(1, 1);
 cout << "Dist is " << Point :: dist(a, b) << endl;
 cout << "point count is " << Point::point_count <<endl;
 return 0;
 }