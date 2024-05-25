/*
 Write a program that asks the user to enter two integers, one named smaller,
 the other named larger. If the user enters a smaller value for the second integer,
 use a block and a temporary variable to swap the smaller and larger values. 
 Then print the values of the smaller and larger variables. 
 Add comments to your code indicating where each variable dies. Note: When you print the values, 
 smaller should hold the smaller input and larger the larger input, no matter which order they were entered in.
*/

#include <iostream>

int main() {
    int smaller{};
    int larger{};

    {
        int temp{};
        std::cout << "Enter an integer: ";
        std::cin >> temp;

        int temp2{};
        std::cout << "Enter a larger integer: ";
        std::cin >> temp2;

        if (temp > temp2) {
            larger = temp;
            smaller = temp2;
        }
        else {
            smaller = temp;
            larger = temp2;
        } //temp and temp2 dies here.
    }

    std::cout << "Swapping the values..." << "\n";
    std::cout << "The smaller value is " << smaller << "\n";
    std::cout << "The larger value is " << larger << "\n";
} //smaller and larger dies here