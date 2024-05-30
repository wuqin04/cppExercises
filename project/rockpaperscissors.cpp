#include <iostream>

int main() {
    srand(time(NULL));

    std::cout << "Easy Rock-Paper-Scissors Game" << "\n";
    std::cout << "You are playing against AI." << "\n";

    char playerChoice{};
    char aiChoice{};
    int aiRand{(rand() % 3) + 1};

    std::cout << "Choose Your Move." << "\n";
    std::cout << "(R = Rock, P = Paper, S = Scissors)" << "\n";
    std::cin >> playerChoice;

    if (aiRand == 1) 
        aiChoice = 'R';
    else if (aiRand == 2) 
        aiChoice = 'P';
    else if (aiRand == 3)
        aiChoice = 'S';

    std::cout << "AI chose " << aiChoice << "\n";

    if ((playerChoice == 'R' || playerChoice == 'r') && aiChoice == 'S')
        std::cout << "You Win";
    else if ((playerChoice == 'P' || playerChoice == 'p') && aiChoice == 'R')
        std::cout << "You Win";
    else if ((playerChoice == 'S' || playerChoice == 's') && aiChoice == 'P')
        std::cout << "You Win";
    else if ((playerChoice == 'R' || playerChoice == 'r') && aiChoice == 'P')
        std::cout << "You Lose";
    else if ((playerChoice == 'P' || playerChoice == 'p') && aiChoice == 'S')
        std::cout << "You Lose";
    else if ((playerChoice == 'S' || playerChoice == 's') && aiChoice == 'R')
        std::cout << "You Lose";
    else
        std::cout << "Tied";
}