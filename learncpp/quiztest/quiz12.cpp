/*
 Write a program that prints out the letters a through z along
  with their ASCII codes. Use a loop variable of type char
*/

#include <iostream>

int main() {
    char character{97};

    while (character <= 122) {
        std::cout << character << " " << static_cast<int>(character) << "\n";
        character++;
    }
}