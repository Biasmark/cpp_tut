#include <string>
#include <iostream>

int functionsample(int a){return a;}
// function overloading with different daya type
std::string functionsample(const std::string& a){return a;}

//Default setting 
int functionsample(const int& a, const int& b, const int& c = 10) {return a+b+c;}

int main(){
    std::cout << functionsample(1) << std::endl;
    std::cout << functionsample("yhea") << std::endl;
    std::cout << functionsample(1,2) << std::endl;
}

    