/*
 Write a C++ program to check a given integer and return true 
 if the difference is within 10 of integer 100 or integer 200
*/

#include <iostream>
#include <cmath>

bool is10(int value);

int main() {
    int value{};

    bool check{is10(value)};

    std::cout << "Input your value: ";
    std::cin >> value;

    std::cout << check;    
}

bool is10(int value) {
    return abs(value - 100) <= 10 || abs(value - 200) <= 10;
}