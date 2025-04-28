// Complete Guide to C++ Programming Foundations
// Exercise 08_03
// Template Classes, by Eduardo Corpeño 

#include <iostream>

// GameEntity template class for storing positions in 2D space
template <typename T> //T is a placeholder now for the type (i.e. float double) at variable declaration. It is now determined when an object is instantiated.
class GameEntity {
    T x, y;  // x and y positions of the entity
public:
    GameEntity(T xPos, T yPos) : x(xPos), y(yPos) {}
    void printPosition() {
        std::cout << "Position: (" << x << ", " << y << ")" << std::endl;
    }
};

int main(){
    GameEntity<int> enemy(10, 20);  // Position with integers
    std::cout << "Enemy ";
    enemy.printPosition();

    GameEntity<float> treasure(12.5f, 7.8f); //switching class data types on the fly
    std::cout << "Treasure";
    treasure.printPosition();

    std::cout << std::endl << std::endl;
    return 0;
}
