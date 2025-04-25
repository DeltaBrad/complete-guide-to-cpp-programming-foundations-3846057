// Complete Guide to C++ Programming Foundations
// Exercise 04_09
// C Strings, by Eduardo Corpeño 

#include <iostream>
#include <cstring>

int main(){
    const size_t LENGTH = 50;
    char racer1[] = "speedy"; //size of racer 1 determined by constant declared at initialization (characters plus 1 for null terminator)
    char racer2[LENGTH];
    char raceResult[LENGTH * 2];

    strncpy(racer2, "Lightning", sizeof(racer2) -1); //strncpy is a string copy, and requires 3 parameters. The buffer (where to store string), the value to copy, and the maximum characters it can copy.
    racer2[sizeof(racer2)-1] = '\0'; //insures the last index of the string has a null terminator

    strncpy(raceResult, "Winner is ", sizeof(raceResult) -1);
    raceResult[sizeof(raceResult)-1] = '\0';

    strncat(raceResult, racer1, sizeof(raceResult)- strlen(raceResult) - 1); //this is a concatenation of strings where first argument is destination string that will hold result,the 2nd is the array to concatenate, last is the max number of characters, which is the number of characters left in the destination string minus 1.




    std::cout << "Racer 1: " << racer1 << std::endl;
    std::cout << "Racer 2: " << racer2 << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
