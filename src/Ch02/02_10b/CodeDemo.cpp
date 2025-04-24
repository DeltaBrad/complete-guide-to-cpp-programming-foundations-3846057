// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    target_x = -123.45; //implicit conversion to double without trailing f
    sprite_x = target_x; //implicit conversion from float/double to integer, value is truncated
    player_x = sprite_x; //implicit conversion to two's compliment of negative value
    std::cout << "Player X (uint32_t): " << static_cast<int32_t>(player_x) << std::endl; //using static_cast to change player_x to a signed integer
    std::cout << std::endl << std::endl;
    return 0;
}
