// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    celsius = (static_cast<float>(5) / 9.0) * (fahrenheit - 32); //5 has been converted from int to float, 9 has been converted from int to double, compiler will use largest type to perform math operation.
    //celsius = (5 / 9) * (fahrenheit - 32); This would have a value of 0, since compiler would treat 5/9 as int/int, which would return the quotient of 0, then 0*X is 0.

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    float weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;
    std::cout << "Integer part   : " << static_cast<int>(weight) << std::endl;
    std::cout << "Fractional part: " << (int)((weight - int(weight))*10000) << std::endl; //this would show the decimal portion as a whole integer to 4 decimal places

    std::cout << std::endl << std::endl;
    return 0;
}
