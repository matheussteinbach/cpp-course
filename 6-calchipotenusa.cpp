#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;

    std::cout << "Informe o primeiro lado do triangulo: " << "\n";
    std::cin >> a;

    std::cout << "Informe o segundo lado do triangulo: " << "\n";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "A hipotenusa do triângulo de lados " << a << " e " << b << " é igual a: " << c << "\n";

    return 0;
}