#include <iostream>

void spacing();

int main() {
    int choice{};
    spacing();
    std::cout << "?? : 你到底爱不爱我？" << "\n";
    std::cout << "(1) 当然爱。" << "\n";
    std::cout << "(2) 不爱了。" << "\n";
    std::cout << "(3) 没那么爱了吧。" << "\n\n";
    std::cout << "你：";

    std::cin >> choice;
    switch (choice) {
        case 1:
            spacing();
            std::cout << "?? : 都这个时候了你还想骗我？" << "\n";
            std::cout << "?? : 你有没有羞耻心。" << "\n";
            break;
        case 2:
            spacing();
            std::cout << "?? : 你总算说实话了。" << "\n";
            std::cout << "?? : 那为何纠缠我那么久。" << "\n";
            break;
        case 3:
            spacing();
            std::cout << "?? : 为什么你可以做出这种事情?" << "\n";
            std::cout << "?? : 我在你心里到底算什么东西?" << "\n";
            break;
    }
}

void spacing() {
    std::cout << "\n";
}