// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 
/*Goal: ask user in terminal their name and display their name back to them*/

#include <iostream>
#include <string>
int main(){
    std::string name; //defines variable "name" as string
    std::cout << "Enter your name:" << std::flush; //does part of what endl does but stays on same line
    std::cin >> name; //note: cin only works for a single word
    std::cout << name << "? That name is... unique." << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}