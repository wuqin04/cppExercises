#include <iostream>

void mainMenu(int userInput);
void startGame();
void exitGame();

int main() {
    bool running{true};
    int userInput{};

    while (running) {
        mainMenu(userInput);

        if (!running) 
            break;
    }
}

void mainMenu(int userInput) {
    std::cout << "Welcome to Simple RPG" << "\n";
    std::cout << "1. Start Game" << "\n";
    std::cout << "2. Exit Game" << "\n";

    std::cout << "\n" << "Your Choice: ";
    std::cin >> userInput;

    switch (userInput) {
        case 1:
            startGame();
            break;
        case 2:
            exitGame();
            break;
        default:
            std::cout << "Your input is invalid." << "\n";
            break;
    }
}

void startGame() {
    for (int i = 50; i > 0; i--) {
        std::cout << "\n";
    }

    std::cout << "Game Started.";
}

void exitGame() {
    
}

