#include <iostream>

double getTotal(double prices[], int size){
    // Não é possiível descobrir o tamanho com sizeof nem fazer forEach
    // Ponteiro para o array 
    double sum = 0;
    for(int i = 0; i < size; i++){
        sum += prices[i];
    }
    return sum;
}

int main(){

    // Array sempre mesmo data type
    //std::string cars[] = {"Honda", "Nissan"};

    // Ou declarar antes o tamanho e tipo
    std::string cars[3];

    cars[0] = "Honda";
    cars[1] = "Nissan";
    cars[2] = "Tesla";

    // sizeof() tamanho em bytes
    // string - 32bytes(endereço do texto), char 1 byte, int 4bytes, double 8bytes
    std::cout << sizeof(cars) << "bytes \n"; 
    int num;
    std::cout << sizeof(num) << "bytes \n";

    std::cout << sizeof(cars)/sizeof(std::string) << " elements \n"; 

    std::cout << "\n";

    for(int i = 0; i < sizeof(cars)/sizeof(std::string); i++){
        std::cout << cars[i] << "\n";
    }

    std::cout << "\n";

    // forEach
    for(std::string car : cars){
        std::cout << car << "\n";
    }

    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(double);
    std::cout << getTotal(prices, size) << "\n";

    return 0;
}