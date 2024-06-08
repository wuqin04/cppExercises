/* 
 Write a function called calculate() that takes two integers and a char representing one of the 
 following mathematical operations: +, -, *, /, or % (remainder). Use a switch statement to 
 perform the appropriate mathematical operation on the integers, and return the result. 
 If an invalid operator is passed into the function, the function should print an error message. 
 For the division operator, do an integer division, and don’t worry about divide by zero.
*/
#include <iostream>

void calculate(int x, int y, char sym);

int main() {
    int x{};
    int y{};
    char sym{};

    calculate(x,y,sym);
}

void calculate(int x, int y, char sym) {
    std::cout << "Input your first integer: ";
    std::cin >> x;
    std::cout << "Input your second integer: ";
    std::cin >> y;
    std::cout << "Input +, -, *, /, or % ";
    std::cin >> sym;

    switch(sym) {
        case '+':
            std::cout << x + y;
        case '-':
            std::cout << x - y;
        case '*':
            std::cout << x * y;
        case '/':
            std::cout << x / y;
        case '%':
            std::cout << x % y;
        default:
            std::cout << "Error Symbol.";
    }
}