#include <iostream>

int main(){
    // Usando o tempo atual como seed, pseudo random
    srand(time(NULL));

    // numeros entre 0 e 100  
    int num = (rand() % 100) + 1;
    int guess;
    int tries = 0;

    do {
        std::cout << "Escolha um número entre 1 e 100: \n";
        std::cin >> guess;
        tries++;

        if (guess > num){
            std::cout << "Muito alto\n";
        } else if(guess < num){
            std::cout << "Muito baixo\n";
        }
    } while(guess != num);

    std::cout << "DING DING DING DING DING \n";
    std::cout << "Você acertou em " << tries << " tentativas! \n";
    return 0;
}