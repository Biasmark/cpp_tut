#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

class Human {
 public:
 Human(int kindness) : kindness_ {kindness } {}

 bool operator <(const Human& other) const {
 return kindness_ < other. kindness_ ;
}

 bool operator =(const Human& other) const{
     return power == other.power; 
 }

void setPower(const int& energy){power = energy;}
int getkindness(){return kindness_;}
 private:
 int kindness_ = 100;
 int power = 10;

 };

 int main () {
 vector <Human > humans = {Human {20}, Human {30}};
 std :: sort(humans.begin (), humans.end ());
 humans[0].setPower(20);
 humans.begin()->setPower(30);
 Human& a = humans[0];
 Human& b = humans[1];
    
    std::cout<< humans[0].operator<(humans[1]) <<std::endl;
    std::cout<< "Human.begin. = " << a.getkindness() << std::endl;
     std::cout<< "Human.end. = " << b.getkindness() << std::endl;
 
 return 0;
}