#include <iostream>

int main(){
    // [Linhas][Colunas], pelo menos colunas precisa ser inicializado o tamanho
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}};

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){
        // linha
        for(int j = 0; j < sizeof(cars[0])/sizeof(cars[0][0]); j++){
            //coluna
            std::cout << cars[i][j] << " ";
        }
        std::cout << "\n";
    }
    
    return 0;
}