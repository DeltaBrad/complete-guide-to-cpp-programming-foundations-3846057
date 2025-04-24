// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc};

struct game_character{
    std::string name; 
    int level;
    character_role role;
};


int main(){
    game_character Joe;
    Joe.name = "Dirt";
    Joe.level = 10;
    Joe.role = character_role::sidekick; //Joe is now a structure that contains the data of name, level, and role. Structures allow you to assign a single variable several qualities.
    std::cout << std::endl << std::endl;
    return 0;
}
