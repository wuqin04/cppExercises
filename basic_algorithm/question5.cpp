/*
 Write a C++ program to create a string where 'if' is added to the front
 of a given string. If the string already begins with 'if', 
 return the string unchanged.
*/

#include <iostream>
#include <string>

int main() {
    std::string input{""};

    std::cout << "Input your string: ";
    std::getline(std::cin,input);

    if(input.find("if") != std::string::npos) {
        std::cout << input;
    }
    else {
        std::cout << "If " + input;
    }
}