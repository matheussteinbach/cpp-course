#include <iostream>

void swap(std::string &x, std::string &y){
    // Passando para a função são cópias do valor original
    // Para alterar o original, passar a referencia
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}

void printInfo(const std::string &x, const std::string &y){
    // Const parameters: para não conseguir alterar o valor dentro da função
    // Por referencia pior ainda -> alterar valor original, alterar a referencia de um ponteiro

    //x = "";
    //y = "";
    std::cout << x << "\n";
    std::cout << y << "\n";
}

int main() {
    // & adress-of operator

    std::string x = "Fanta";
    std::string y = "Coca";

    std::cout << &x << "\n";
    std::cout << &y << "\n";

    swap(x, y);

    printInfo(x, y);

    return 0;
}