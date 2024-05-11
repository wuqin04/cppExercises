/*
 Write a C++ program to compute the sum of two given integer values. 
 If the two values are the same, then return triple their sum.
*/

#include <iostream>

int getResult(int x, int y);
int getInput(int value);

int main() {
    int num1{getInput(num1)};
    int num2{getInput(num2)};

    std::cout << getResult(num1, num2);
}

int getInput(int value) {
    std::cout << "Input num: ";
    std::cin >> value;
    return value;
}

int getResult(int x, int y) {
    return x == y? (x + y) * 3: x + y;
}