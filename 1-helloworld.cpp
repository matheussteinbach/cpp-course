#include <iostream>

int main(){

    // Quebra de linha
    /*
        Sempre necessario
        \n, << "\n", << std::endl
    */

    std::cout << "Eu gosto de strogonoff!\n";
    std::cout << "Com batata palha!" << std::endl;

    int x;
    x = 5;

    int y = 6;

    int sum = x + y;

    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << sum << "\n";

    int price = 2.5;
    std::cout << price << "\n";

   // Decimal é truncado, para float -> double
   double temperature = 25.1;
   std::cout << temperature << "\n"; 

    // char apenas 1 caractere
    char grade = 'A';
    std::cout << grade << "\n";
    // Se tiver mais que um, mostra apenas o ultimo e erro de overflow

    bool student = true;
    bool power = false;
    
    // string -> objeto que representa sequencia de char
    std::string name = "Matheus";
    std::cout << name << "\n";

    char hello[] = "Hello";
    std::cout << hello << "\n";

    std::cout << hello << ", meu nome é " << name << "\n";

    return 0;
}
