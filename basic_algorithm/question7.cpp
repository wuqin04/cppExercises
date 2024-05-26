/*
  Write a C++ program to exchange the first and 
  last characters in a given string and return 
  the result string
*/

#include <iostream>
#include <string>

std::string rearrange(std::string input);

int main() {
  std::string input{};
  std::cout << "Enter your character: ";
  std::cin >> input;

  std::cout << rearrange(input);
}

std::string rearrange(std::string input) {
  std::string arrange{input.substr(input.length()-1) + input.substr(1,input.length()-2) + input.substr(0,1)};
  return arrange;
}