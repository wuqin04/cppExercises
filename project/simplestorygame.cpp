#include <iostream>
#include <string>
#include <windows.h>

void spacing();
void introduction();
void initialGoodReply();
void initialBadReply();
std::string inputBoyName();
std::string inputGirlName();
void gameTitle();
void textDelay(double seconds);

int main() {
    introduction();

    std::string boyName{inputBoyName()};
    std::string girlName{inputGirlName()};

    gameTitle();
}

void introduction() {
    spacing();
    std::cout << "?? : 我觉得我很累。" << "\n";
    std::cout << "(1) 我们可以好好谈吗？" << "\n";
    std::cout << "(2) 那我们都互相冷静一下吧。" << "\n";
    std::cout << "(3) 那就分手吧，没必要纠缠了。" << "\n\n";
    std::cout << "你：";

    int choice{0};
    std::cin >> choice;

    switch (choice) {
        case 1:
            spacing();
            initialGoodReply();
            break;
        case 2:
            spacing();
            initialGoodReply();
            break;
        case 3:
            spacing();
            initialBadReply();
            break;
    }
}

void initialGoodReply() {
    std::cout << "?? : 我觉得跟你相处真的很累。" << "\n";
    std::cout << "?? : 。。。。。" << "\n";
    std::cout << "?? : 。。。。" << "\n";
    std::cout << "?? : 。。" << "\n";
    std::cout << "?? : 。" << "\n";
    spacing();

} 

void initialBadReply() {
    std::cout << "?? : 好，我知道了。" << "\n";
    std::cout << "?? : 那就分手吧。" << "\n";
    std::cout << "?? : 。。。。。" << "\n";
    std::cout << "?? : 。。。。" << "\n";
    std::cout << "?? : 。。" << "\n";
    std::cout << "?? : 。" << "\n";
    spacing();
}

std::string inputBoyName(){
    std::string boyName{};
    std::cout << "你的名字：";
    std::getline(std::cin >> std::ws, boyName);
    return boyName;
}

std::string inputGirlName() {
    std::string girlName{};
    std::cout << "你女朋友的名字： ";
    std::getline(std::cin >> std::ws, girlName);
    return girlName;
}

//under contruction...
#ifdef CONSTRUCTION
#define CONSTRUCTION
void gameTitle() {
    spacing();
    textDelay(2);
    std::cout << "我";
    textDelay(0.2);
    std::cout << "们";
    textDelay(0.2);
    std::cout << "的";
    textDelay(0.2);
    std::cout << "故";
    textDelay(0.2);
    std::cout << "事";
}
#endif

void textDelay(double seconds) {
    Sleep(seconds * 1000);
}

void spacing() {
    std::cout << "\n";
}