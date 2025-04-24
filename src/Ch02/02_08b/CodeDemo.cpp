// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

// enum asset_type {texture, sound, animation, script}; //this will assign the items in the brackets indexed values starting from 0, and act as global variables
//enum menu_section {background, music, sound, controls, texture};

enum class asset_type {texture, sound, animation, script};//by adding class, the enumerations become strongly typed, and require a scope resolution operator to access
enum class menu_section {background, music, sound, controls, texture};

int main(){
    //int asset_value;
    asset_type asset_value; //defines asset_value to be same type as asset_type
    int sound = 8; //sound becomes a local variable to main function
    //asset_value = sound; //calls the latest instance of "sound" and would assume int as type
    asset_value = asset_type::sound; //this will pull the value of sound from the enumerated class asset_type
    std::cout << "asset_value = " << (int)asset_value << std::endl; //added int to type cast asset_value so it could be called by << operator

    std::cout << std::endl << std::endl;
    return 0;
}
