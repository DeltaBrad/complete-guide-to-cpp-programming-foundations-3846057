// Complete Guide to C++ Programming Foundations
// Exercise 04_04
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <chrono>

// Type aliases for chrono classes
using Clock = std::chrono::system_clock; //sets Clock as alias for accessing system clock
using TimePoint = std::chrono::time_point<Clock>; //sets TimePoint as alias for using time_point with system clock as input
using Duration = std::chrono::duration<double>; //sets Duration as alias for using duration which stores time ticks

int main(){
    TimePoint *start, *end; // makes start and end pointers
    Duration *elapsed_seconds = new Duration(); //made elapsed_seconds a pointer with dynamic memory allocation
    std::string input;

    start = new TimePoint(Clock::now()); //initializes start to system clock value

    std::cout << "Type 'start' as quickly as you can and hit ENTER: " << std::flush;
    std::cin >> input;

    end = new Timepoint(Clock::now()); //sets end value to system clock
    *elapsed_seconds = *end - *start; //sets elapsed_seconds pointer value to value of end pointer minus start pointer

    std::cout << "Reaction time: " << elapsed_seconds->count() << "s" << std::endl; //since elapsed_seconds is a pointer and not a member of Duration, replace the "." with "->" to use count since the member would precede pointer

    delete start; //delete variables to free memory
    delete end;
    delete elapsed_seconds;
    
    std::cout << std::endl << std::endl;
    return 0;
}
