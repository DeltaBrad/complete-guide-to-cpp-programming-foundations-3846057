// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define LEVEL_COUNT 4 //creates macro for level count

int main(){
    const size_t LEVEL_COUNT = 4; //creates a constant variable to be referred to with type appropriate for sizes
    int enemies[LEVEL_COUNT]; //creates array "enemies" that has int values and is of size level count (4)
    float levelDifficulty[] = {1.0, 3.5, 6.0, 10.5}; //this will create a float array with size of 4 based on initialized values. Although initialized values are given, "auto" will not work on arrays. Also, while values entered were doubles, the values will be converted to float.
    enemies[0] = 10; // arrays are indexed starting at 0 and end at Size-1. This line sets the 0 index of the array to a value of 10.
    enemies[1] = 15;
    enemies[2] = 20;
    enemies[3] = 25;
    std::cout << std::endl << std::endl;
    return 0;
}
