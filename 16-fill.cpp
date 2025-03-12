#include <iostream>


int main(){
    const int SIZE = 100;
    std::string foods[SIZE];

    // Começo (array), final (array+tamanho), elemento
    fill(foods, foods + SIZE/2, "pizza");
    fill(foods + SIZE/2, foods + SIZE, "aborge");

    for(std::string food : foods){
        std::cout << food << " ";
    }

    std::cout << "\n";

    std::string cars[5];
    int tamanho = sizeof(cars)/sizeof(cars[0]);


    std::string temp;
    for(int i = 0; i < tamanho; i++){
        std::cout << "Insira um carro que você gosta: \n";
        std::getline(std::cin, temp);
        if (temp == "q"){
            break;
        } else{
            cars[i] = temp;
        }
    }

    for(int i = 0; !cars[i].empty(); i++){
        std::cout << cars[i] << "\n";
    }
    std::cout << "\n";


    return 0;
}