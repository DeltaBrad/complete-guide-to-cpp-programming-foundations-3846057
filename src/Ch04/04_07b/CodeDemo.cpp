// Complete Guide to C++ Programming Foundations
// Exercise 04_07
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <complex>

int main(){
    std::vector<std::complex<double>> points; //initialize vector "points" as complex numbers of double type

    points.push_back(std::complex<double>(3.5, 4.0)); //adding elements to end of vector
    points.push_back(std::complex<double>(1.0, -2.1));
    points.push_back(std::complex<double>(-5.3, 6.0));
    points.push_back(std::complex<double>(7.2, 8.9));

    std::cout << "First real part" << points.begin()->real() << std::endl; //printed using real member function
    std::cout << "imaginary at index 1" << points[1].imag()  << std::endl; //used dot operator since the indexed position called is an object, not an iterator
    std::cout << "2nd to last real part" << prev(points.end(), 2)->real()  << std::endl; // prev has first value as iterator and second value is the number of positions you want to go back
    std::cout << "Last imaginary" << (points.end() - 1)->imag()  << std::endl; //end returns iterator to the element after the last element, so subtract 1, print imaginary element using imag member function



    std::cout << std::endl << std::endl;
    return 0;
}
