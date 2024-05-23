/*
 Write a program that asks the user to input an integer, 
 and tells the user whether the number is even or odd. 
 Write a constexpr function called isEven() that returns true 
 if an integer passed to it is even, and false otherwise. 
 Use the remainder operator to test whether the integer 
 parameter is even. Make sure isEven() works with 
 both positive and negative numbers.
*/

#include <iostream>

constexpr bool isEven(int value);

int main() {
    std::cout << "Input an integer: ";
    int value{};
    std::cin >> value;

    std::cout << value << " is" << (isEven(value)? " even": " odd");
}

constexpr bool isEven(int value) {
    return value % 2 == 0;
}