// Complete Guide to C++ Programming Foundations
// Exercise 07_03
// Function Members, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Inventory{
public:
    void addItem(const std::string& item){ //function to add items to inventory, returns void
        if (items->size() < capacity) //will check the capacity of inventory for space, uses arrow since items will be a pointer
            items->push_back(item); //capacity is a vector so we add to end
        else 
            std::cout << "Inventory is full, cannot add " << item << std::endl;
    }


    void removeItem(const std::string& item){
        auto iter = std::find(items->begin(), items->end(), item); //creates iterator that searches through items to find item parameter given
        if (iter != items->end()) //if iterator got to end of items pointer, then item would not be in inventory
            items->erase(iter);
        else
            std::cout << "Item " << item << " not found in inventory" << std::endl;
    }


    std::string getItem(int index) const{
        if(index >=0 && index < items->size())
            return (*items)[index];
        else
            return "Index out of bounds";
    }

    int getItemCount() const{
        return items->size();
    }

    void displayInventory() const{
        for (size_t i = 0; i < items->size(); i++){
            std::cout << (*items)[i];
            if (i < items->size() - 1) std::cout << ", ";
        }
    }



private:
    std::vector<std::string> *items; // Pointer to a vector of items
    int capacity; // Maximum number of items allowed
};

int main(){
    
    std::cout << std::endl << std::endl;
    return 0;
}
