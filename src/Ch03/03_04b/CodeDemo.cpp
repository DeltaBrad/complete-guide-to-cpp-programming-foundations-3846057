// Complete Guide to C++ Programming Foundations
// Exercise 03_04
// Increment and Decrement Operators, by Eduardo Corpeño 

#include <iostream>

int main(){
    int player_score = 10;
    int player_lives = 3;

    std::cout << "Initial Score: " << player_score << std::endl;
    std::cout << "Initial Lives: " << player_lives << std::endl;

    // Postfix increment
    std::cout << "Score using postfix increment: " << player_score++ << std::endl; //++ adds 1 after current value used, player_score is now 11

    // Prefix increment
    std::cout << "Score using prefix increment: " << ++player_score << std::endl; //++ adds 1 before current value used

    // Postfix decrement
    std::cout << "Lives using postfix decrement: " << player_lives-- << std::endl; //-- subtracts one after current value used, player_lives is now 2

    // Prefix decrement
    std::cout << "Lives using prefix decrement: " << --player_lives << std::endl; //-- subtracts one before current value used

    std::cout << std::endl << std::endl;
    return 0;
}