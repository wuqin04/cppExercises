/*
 Write a C++ program to find the absolute difference between n and 51. If n is greater
 than 51 return triple the absolute difference.
 */

// absolute difference: | x - y| = z

#include <iostream>
#include <cmath>

int getABS(int x);

int main() {
    int value = 0;

    std::cout << "Input your value: ";
    std::cin >> value;

    std::cout << getABS(value);
}

int getABS(int x) {
    return x > 51? abs(x - 51) * 3: abs(x - 51);
}
