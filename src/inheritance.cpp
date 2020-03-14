#include <iostream>

using std :: cout; using std :: endl;
class Rectangle {
    public:
    Rectangle (int w, int h) : width_{w}, height_{h} {}

    int width () const { return width_; }
    int height () const { return height_; }

    // protected can be seen from the child class, 
    // but private cannot be seen from the child. 
    protected:
    int width_ = 0;
    int height_ = 0;
 };

// inheretance from Rectangle class to make Square class 
 class Square : public Rectangle {
    public:
    Square(int size) : Rectangle {size , size} {}
};

 int main () {
 Square sq (10); // Short name to save space.
 cout << sq.width () << " " << sq.height () << endl;
 return 0;
 }