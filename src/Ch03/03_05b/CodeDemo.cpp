// Complete Guide to C++ Programming Foundations
// Exercise 03_05
// Compound Assignment Operators, by Eduardo Corpeño 

#include <iostream>

int main(){
    int ammo = 30;
    int incoming_zombies = 20;

    std::cout << "Initial Ammo: " << ammo << std::endl;
    std::cout << "Initial Zombies Incoming: " << incoming_zombies << std::endl;

    // Addition assignment
    ammo += 10; //adds 10 to ammo
    std::cout << "Ammo Update: " << ammo << std::endl;
    // Subtraction assignment
    ammo -= 5; //subtracts 5 from ammo
    std::cout << "Ammo Update: " << ammo << std::endl;
    // Multiplication assignment
    incoming_zombies *= 2; //multiplies variable by 2 and stores value
    std::cout << "Zombie Update: " << incoming_zombies << std::endl;
    // Division assignment
    ammo /= 2; //divides variable by 2 and stores value
    std::cout << "Ammo Update: " << ammo << std::endl;
    // Remainder assignment
    ammo %= 6; //provides remainder after variable is divided by 6
    std::cout << "Ammo Update: " << ammo << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}
