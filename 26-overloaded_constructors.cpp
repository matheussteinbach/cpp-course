#include <iostream>

class Pizza {
    public:
        std::string topping1;
        std::string topping2;

    Pizza(){}
    Pizza(std::string topping1){
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main(){

    // Overloaded constructors permitem objetos com quantidades de atributos variados
    Pizza pizza1("pepperoni");
    Pizza pizza2("Cogumelo, pimentao");
    Pizza pizza3;

    return 0;
}