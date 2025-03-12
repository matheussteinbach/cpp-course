#include <iostream>

int main(){
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "******** CALCULATOR *********\n";

    std::cout << "Digite o operador: \n";
    std::cin >> op;

    std::cout << "Número 1: \n";
    std::cin >> num1;

    std::cout << "Número 2: \n";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "Resultado = " << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Resultado = " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Resultado = " << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Resultado = " << result << "\n";
            break;
        case '%':
            result = (int)num1 % (int)num2;
            std::cout << "Resultado = " << result << "\n";
            break;
        default:
            std::cout << "Não disponível\n";
    }
    std::cout << "*****************************\n";


    return 0;
}