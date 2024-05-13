/*
 Write a C++ program to check two given integers,
 and return true if one of them is 30 or if their sum is 30.
*/

#include <iostream>

int getInput(int value);
bool is30(int x, int y);

int main() {
    int num1{getInput(num1)};
    int num2{getInput(num2)};
    
    bool check{is30(num1, num2)};

    std::cout << check;
}

bool is30(int x, int y) {
    return x + y == 30 || x == 30 || y == 30;
}

int getInput(int value) {
    std::cout << "Input num: ";
    std::cin >> value;
    return value;
}