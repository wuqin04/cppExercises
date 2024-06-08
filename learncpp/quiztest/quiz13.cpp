/*
 Invert the nested loops example so it prints the following:

 5 4 3 2 1
 4 3 2 1
 3 2 1
 2 1
 1
*/

#include <iostream>

int main() {
    for (int i = 5; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            std::cout << j << " ";
        }

        std::cout << "\n";
    }
}