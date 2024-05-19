 #include <iostream>
 #include <string>

 int main() {
    std::cout << "Your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws,name);

    std::cout << "Your name has " << name.length() << " characters.";
 }