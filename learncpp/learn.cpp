#include <iostream>

int main() {
   bool isAccepted{false};

   std::string input{};

   std::cout << "Do you want to go out with me?" << "\n";
   std::cout << "(Yes/No)";
   std::cin >> input;

   while (!isAccepted) {
      if (input == "Yes" || input == "yes") {
         std::cout << "Let's date on 27/5/2024.";
         isAccepted == true;
      }
      else {
         std::cout << "Do you want to go out with me?" << "\n";
         std::cout << "(Yes/No)";
      }
   }
}