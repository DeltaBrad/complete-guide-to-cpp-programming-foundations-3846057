// Complete Guide to C++ Programming Foundations
// Exercise 06_02
// Passing Values to a Function, by Eduardo Corpeño 

#include <iostream>

int square (int x) {
    x = x*x;
    return x;
}

//next function is how to take arguments by address
void swap(int *x, int *y){        //this function will have no return
    int temp = *x; //temp will be an integer of value where x is pointing
    *x = *y; //x will get the value of where y is pointing
    *y = temp; //y will get the value of temp
}

//take argument by reference
void swap(int& x, int& y){          // swap is an overload of the previous function. int& is declaring that x and y are integer references
    int temp = x;
    x = y;
    y = temp;
}



int main(){
    int a = 9, b;
    b = square(a);
    // TODO: square
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    // TODO: swap
    swap(&a, &b); //address of a, address of b
     std::cout << "a = " << a << ", b = " << b << std::endl;
    
     // TODO: swap

    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a,b);


    
    std::cout << std::endl << std::endl;
    return 0;
}
