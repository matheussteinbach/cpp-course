#include <iostream>

int main(){
    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;
    int age;

    std::cout << "What's your age? \n";
    std::cin >> age;

    std::cout << "What's your full name? \n";
    std::getline(std::cin >> std::ws, name);
    // Buffer armazena a quebra de linha, >> std::ws para eliminar
    // Padrao: std::getline(std::cin, name);
 
    std::cout << "Hello, " << name << "!\n";
    std::cout << "You are " << age << " years old!\n";

    return 0;
}