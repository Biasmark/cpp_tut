#include <iostream>
#include <string>
#include <vector>

int main(){
    std::string hellow = "hellow";
    std::vector<std::string> owner;
    owner.emplace_back(hellow); // copy 
    owner.emplace_back(move(hellow)); // Move
    std::cout <<hellow << std::endl; // undefined, because of the Move command in previous step
    std::cout <<"End of the program" << std::endl;
    return 0;
}