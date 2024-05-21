/*
 Write a program that asks for the name and age of two people, 
 then prints which person is older.

 Here is the sample output from one run of the program:

 Enter the name of person #1: John Bacon
 Enter the age of John Bacon: 37
 Enter the name of person #2: David Jenkins
 Enter the age of David Jenkins: 44
 David Jenkins (age 44) is older than John Bacon (age 37).
*/

#include <iostream>
#include <string>

std::string addName(int list);
int addAge(std::string name);
void printResult(std::string name1, int age1, std::string name2, int age2);

int main() {
    std::string name1{addName(1)};
    int age1{addAge(name1)};

    std::string name2{addName(2)};
    int age2{addAge(name2)};

    printResult(name1,age1,name2,age2);
}

std::string addName(int list) {
    std::string name;
    std::cout << "Enter the name of person #" << list << ": ";
    std::getline(std::cin >> std::ws, name);
    
    return name;
}

int addAge(std::string name) {
    int age{};
    std::cout << "Enter the age of " << name << ": ";
    std::cin >> age;

    return age;
}

void printResult(std::string name1, int age1, std::string name2, int age2) {
    if (age1 < age2) 
        std::cout << name2 << " (age " << age2 << ") " 
                  << "is older than "
                  << name1 << " (age " << age1 << "). ";
    else
        std::cout << name1 << " (age " << age1 << ") "
                  << "is older than "
                  << name2 << " (age " << age2 << "). ";
}