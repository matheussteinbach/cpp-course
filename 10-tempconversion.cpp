#include <iostream>

int main(){
    double temp;
    char unit;

    std::cout << "Conversor de Temperatura\n";
    std::cout << "F - Fahrenheit\n";
    std::cout << "C - Celsius\n";

    std::cout << "Gostaria de converter para qual unidade? \n";
    std::cin >> unit;

    if (unit == 'f' || unit == 'F'){
        std::cout << "Digite a temperatura em Celsius: \n";
        std::cin >> temp;

        temp = (1.8* temp) + 32;
        std::cout << "Temperatura = " << temp << "\n";
    } else if (unit == 'c' || unit == 'C'){
        std::cout << "Digite a temperatura em Fahrenheit: \n";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperatura = " << temp << "\n";
    } else{
        std::cout << "Unidade indisponível";
    }

    return 0;
}