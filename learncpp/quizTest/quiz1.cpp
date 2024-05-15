/*
 The user is asked to enter 2 floating point numbers (use doubles). 
 The user is then asked to enter one of the following mathematical 
 symbols: +, -, *, or /. The program computes the answer 
 on the two numbers the user entered and prints the results. 
 If the user enters an invalid symbol, the program should print nothing.
*/

#include <iostream>

float getUserValue(float value);
char getUserSymbol(char symbol);
void calcAnswer(float x, float y, char z);

int main() {
    float num1{getUserValue(num1)};
    float num2{getUserValue(num2)};

    char symbols{getUserSymbol(symbols)};
    
    calcAnswer(num1,num2,symbols);
}

float getUserValue(float value) {
    std::cout << "Input your value: ";
    std::cin >> value;
    return value;
}

char getUserSymbol(char symbol) {
    std::cout << "Input either +,-,*,/: ";
    std::cin >> symbol;
    return symbol;
}

void calcAnswer(float x, float y, char z){
    if (z == '+') 
        std::cout << x << " + " << y << " is " << x + y;
    else if (z == '-')
        std::cout << x << " - " << y << " is " << x - y;
    else if (z == '*')
        std::cout << x << " * " << y << " is " << x * y;
    else if (z == '/')
        std::cout << x << " / " << y << " is " << x / y;
    else 
        std::cout << " ";
}