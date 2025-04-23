// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 
/* this type of commment will go across multiple lines, where as // is for a single line comment*/

#include <iostream> // #include is a compiler directive that imports libraries into the program. <iostream> is a header file (library) that contains objects and functions that print text to screen and receive text from keyboard. Line 5 is called a preprocessor directive and these do not end with a semicolon
int main(){                //when creating new function, the type must be defined first (int in this case) which is then followed by the function call (case sensitive, this example function shall be "main" which returns an integer). Parameters for function (or input for function) is set within parantheses. The brackets represent the start and end of a code block.
    std::cout << "Code and stuff" << std::endl;//c++ does not auto indent code. Remember to indent code for proper function. std is standard library. Membership in the library is denoted by the double colon (::) operator. The object we are grabbing is cout, which stands for character output. << is used to direct the string to cout.  endl stands for end line, and is directed to cout to end line and begin new line
    std::cout << std::endl << std::endl; //adding two lines to end of output to separate from codespace message
    return 0; //return is a keyword that does what it says for the function. In this case we return the integer 0 since main expects an integer returned to it.
}
// <cstdio> provides functionalities for C-style input and output directives 