#include <iostream>
#include <string>

int main() {
    // Read user name from standard input.
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    // Greet the user by name.
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
