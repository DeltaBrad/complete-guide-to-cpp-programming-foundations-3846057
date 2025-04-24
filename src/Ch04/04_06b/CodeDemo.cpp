// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<std::string> checkpoints = {"Start", "Forest", "Castle"};
    checkpoints.push_back("Cave");
    checkpoints.push_back("Finish"); //push_back adds to the vector new elements to the end of vector
    std::cout << checkpoints[3] << std::endl; //proof that cave got added to the end of vector
    std::cout << std::endl << std::endl;
    return 0;
}
