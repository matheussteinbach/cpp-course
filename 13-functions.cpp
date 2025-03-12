#include <iostream>

int num = 20; // Variavel Global, precisa estar acima da função que quer usar

void parabens(){
    std::cout << "Parabéns! \n";
}

int soma(int a, int b){
    return a + b;
}

int soma(int a, int b, int c){
    return a + b + c;
}

void printNum(){
    int num = 10; // Variavel Local
    std::cout << num << "\n";
    std::cout << ::num << "\n"; // Usando versão global
}

int main(){
    parabens();
    parabens();

    int x = 1;
    int y = 2;
    int z = 3;

    // Funções podem ter o mesmo nome com parametros diferentes (Overloaded Functions)
    std::cout << soma(x, y) << "\n";
    std::cout << soma(x, y, z) << "\n";

    printNum();
    std::cout << num << "\n";
    return 0;
}