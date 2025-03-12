#include <iostream>

int main(){
    std::string name;
    while(name.empty()){
        std::cout << "Digite seu nome: \n";
        std::getline(std::cin, name);
    }
    std::cout << "Seu nome é " << name << "\n";

    int number;

    // faz uma vez e depois confere a condição
    do {
        std::cout << "Insira um número positivo: \n";
        std::cin >> number;
    } while(number <= 0);

    //int i = 0;
    for(int i = 0; i < 3; i++){
        std::cout << "Seu nome é " << name << "\n";
    }

    for(int i = 10; i > 0; i--){
        std::cout << i << "\n";
    }
    std::cout << "FELIZ ANO NOVO! \n";

    // Possivel incrementar e decrementar por mais de 1 -> i += 2, i-= 2
    // Declaração do valor do i fora do () e comparação do i pode ser feito com variavel

    for(int i = 0; i < 10; i++){
        if(i == 3){
            continue;
        } else if (i == 9){
            break;
        }
        std::cout << i << " ";
    }
    std::cout << "\n";

    // Nested loops
    for(int i = 0; i < 3; i++){
        for (int j = 10; j > 0; j --){
            std::cout << j << " ";
        }
    }

    return 0;
}