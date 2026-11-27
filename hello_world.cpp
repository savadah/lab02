#include <iostream>
#include <string>

int main() {
    // Запрашиваем имя пользователя из стандартного потока ввода
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    // Приветствие пользователя по имени
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
