/*
 Fizz Buzz is a simple math game used to teach children about divisibility. 
 It is also sometimes used as an interview question to assess basic programming skills.

 The rules of the game are simple: Starting at 1, and counting upward, 
 replace any number divisible only by three with the word “fizz”, a
 ny number only divisible by five with the word “buzz”, 
 and any number divisible by both 3 and 5 with the word “fizzbuzz”.

 Implement this game inside a function named fizzbuzz() that takes a
 parameter determining what number to count up to. Use a for-loop and a
  single if-else chain (meaning you can use as many else-if as you like).
*/

#include <iostream>

void fizzbuzz(int num) {
    for (int i = 3; i <= num; i++) {
        bool isdivisibleby3 = i % 3 == 0;
        bool isdivisibleby5 = i % 5 ==0;

        if (isdivisibleby3 && isdivisibleby5) {
            std::cout << "fizzbuzz" << "\n";
        }
        else if (isdivisibleby3) {
            std::cout << "fizz" << "\n";
        }
        else if (isdivisibleby5) {
            std::cout << "buzz" << "\n";
        }
        else {
            std::cout << i << "\n";
        }
    }
}

int main() {
    fizzbuzz(100);
}