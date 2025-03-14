#include <iostream>

int main(){
    // Memoria dinamica -> alocada no heap ao inves da stack em tempo de execucao

    int *pNum = nullptr;

    pNum = new int;

    *pNum = 21;

    std::cout << "Endereço: " << pNum << "\n";
    std::cout << "Valor: " << *pNum << "\n";

    delete pNum; // evitar memory leak

    char *pGrades = nullptr;
    int size;

    std::cout << "Quantas notas? \n";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Nota número " << i + 1 << "\n";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }
    std::cout << "\n";
    delete[] pGrades;

    return 0;
}