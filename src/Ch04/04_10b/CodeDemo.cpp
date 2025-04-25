// Complete Guide to C++ Programming Foundations
// Exercise 04_10
// The String Class, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    //const size_t LENGTH = 50; size management of strings not needed since C++ string handling manages this for you.
    std::string racer1 = "Speedy";
    std::string racer2 = "Lightning";
    std::string raceResult;

    

    std::cout << "Racer 1: " << racer1 << std::endl;
    std::cout << "Racer 2: " << racer2 << std::endl;

    raceResult = "Winner is " + racer1; //adding strings together like this is concatenation

    std::cout << raceResult << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
