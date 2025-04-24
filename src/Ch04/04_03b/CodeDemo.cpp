// Complete Guide to C++ Programming Foundations
// Exercise 04_03
// How Arrays and Pointers are Related, by Eduardo Corpeño 

#include <iostream>

int main(){
    int highScores[] = {850, 745, 1220, 990};  // High scores in various game stages
    int* scorePtr = highScores;   // Pointer initialized to the address of the array

    std::cout << "Initial high score: " << *scorePtr << std::endl;  // Display the first high score using pointer
    std::cout << "2nd high score: " << *(scorePtr+1) << std::endl;  // Display the 2nd high score using pointer
    std::cout << "3rd high score: " << scorePtr[2] << std::endl;  // Display the 3rd high score using pointer array
    std::cout << std::endl << std::endl;
    return 0;
}
