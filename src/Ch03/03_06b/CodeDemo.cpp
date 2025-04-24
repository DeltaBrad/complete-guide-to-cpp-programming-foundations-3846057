// Complete Guide to C++ Programming Foundations
// Exercise 03_06
// Preprocessor Directives, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

#define MAX_AMMO 500 //This defines the term MAX_AMMO to a value of 500. any instance of this term will have this value and is performed in the preprocessor
//#define DEBUG

int main(){
    int32_t ammo = 100;
    uint8_t health_items = 5;

#ifdef DEBUG
    std::cout << "[DEBUG] Starting game simulation..." << std:endl; //if DEBUG is defined, message will print
#endif
    ammo += 200; // Player finds extra ammo
    health_items -= 2; // Player uses some health items

    std::cout << "Final Ammo: " << ammo << std::endl;
    std::cout << "Remaining Health Items: " << (int) health_items << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
