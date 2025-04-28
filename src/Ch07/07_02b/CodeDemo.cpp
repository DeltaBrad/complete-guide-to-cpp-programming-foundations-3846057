// Complete Guide to C++ Programming Foundations
// Exercise 07_02
// Data Members, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>

class Inventory{                //class definition, only needs the name and semicolon to define class, but can open brackets to define what the class does
private:
    std::vector<std::string> *items; //points to a vector of items
    int capacity;    // max items allowed
};




int main(){
    
    std::cout << std::endl << std::endl;
    return 0;
}
