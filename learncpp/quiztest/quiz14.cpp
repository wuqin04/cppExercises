/*
 Now make the numbers print like this:

         1
       2 1
     3 2 1
   4 3 2 1
 5 4 3 2 1 
*/

#include <iostream>

int main() {
    for (int spcs = 4; spcs >= 0; spcs--) {
        for (int i = spcs; i > 0; i--) {
            std::cout << "  ";
        }

        for (int j = 5 - spcs; j > 0; j--) {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
}