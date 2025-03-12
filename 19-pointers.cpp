#include <iostream>

int main(){
    // Ponteiro - varíavel que armazena o endereço de outra variavel

    std::string name = "theus";
    std::string pizzas[3] = {"pizza1", "pizza2", "pizza3"};

    // Criando pointeiro usa *
    std::string *pName = &name;
    // variavel pro array ja é um pointer
    std::string *pPizza = pizzas;

    std::cout << pName << "\n";
    std::cout << *pName << "\n"; // * dereference

    std::cout << pPizza << "\n";
    std::cout << *pPizza << "\n";

    // Null pointer - nullptr

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "Deu ruim \n";
        // Undefined behavior
        // std::cout << *pointer << "\n";
    } else {
        std::cout << "Deu bom \n"; 
        std::cout << *pointer << "\n";
    }

    return 0;
}