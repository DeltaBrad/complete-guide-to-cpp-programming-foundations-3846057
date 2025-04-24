// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5; //both a and b are int, b has been given initial value of 5, a is empty. These will also be global variables in this case

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "my_flag = " << my_flag << std::endl;
    my_flag = true;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    std::cout << "my_flag = " << my_flag << std::endl;
    unsigned int positive;
    positive = b - a; // this will be negative value, which causes rollover for unsigned int and would be 2^32 + value, or if using long int would be 2^64 + value
    std::cout << "b - a (unsigned) = " << positive << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}
