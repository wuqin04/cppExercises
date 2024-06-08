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
void anim(double seconds);
void chapter1(std::string boy, std::string girl);

int main() {
    introduction();

    std::string boyName{inputBoyName()};
    std::string girlName{inputGirlName()};

    gameTitle();
    chapter1(boyName, girlName);
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

void gameTitle() {
    for (int i = 100; i >= 0; i--) {
        spacing();
        i--;
    }

    anim(2);
    std::cout << "我";
    anim(0.2);
    std::cout << "们";
    anim(0.2);
    std::cout << "的";
    anim(0.2);
    std::cout << "故";
    anim(0.2);
    std::cout << "事";

    for (int i = 20; i >= 0; i--) {
        spacing();
        anim(0.2);
        i--;
    }
}

void anim(double seconds) {
    Sleep(seconds * 1000);
}

void chapter1(std::string boy, std::string girl) {
    anim(2);
    std::cout << "<";
    anim(0.2);
    std::cout << "第";
    anim(0.2);
    std::cout << "一";
    anim(0.2);
    std::cout << "章";
    anim(0.2);
    std::cout << "：";
    anim(0.2);
    std::cout << "回";
    anim(0.2);
    std::cout << "忆";
    anim(0.2);
    std::cout << ">";

    for (int i = 5; i <= 0; i--) {
        std::cout << "\n";
        spacing();
    }
    std::cout << "那时的我们应该也才18岁，还记得第一次相遇是在一所大学。";
    std::cout << "第一天上课的我找不到教室，你亲切的指引我。到现在还记得你笑起来的样子是多么的灿烂。"; 
}

void spacing() {
    std::cout << "\n";
}