/*
 Write a C++ program to remove the character at a given position in the string. 
 The given position will be in the range 0..string length -1 inclusive
*/

#include <iostream>
#include <string>

int main() {
    std::string name{"Python"};

    int pos{};
    std::cout << "Input position to erase \"Python\": ";
    std::cin >> pos;

    if (pos > name.length())
        std::cout << "The number is out of range." << "\n";
    else 
        name.erase(name.begin() + pos - 1);
    std::cout << name << "\n";
}