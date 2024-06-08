#include <iostream>

void fizzbuzz(int num) {
    for (int i{0}; i <= num; i++) {
        bool nomatch{true};

        if (i % 3 == 0) {
            std::cout << "fizz";
            nomatch =false;
        }
        if (i % 5 == 0) {
            std::cout << "buzz";
            nomatch = false;
        }
        if (i % 7 == 0) {
            std::cout << "pop";
            nomatch = false;
        }
        
        if (nomatch) {
            std::cout << i;
        }

        std::cout << "\n";
    }
}

int main() {
    fizzbuzz(150);
}