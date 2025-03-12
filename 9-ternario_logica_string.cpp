#include <iostream>

int main(){
    int grade = 75;
    // condição ? true : false
    grade >= 60 ? std::cout << "Passou! \n" : std::cout << "Reprovou! \n";

    int number = 9;
    std::cout << (number%2 == 0 ? "Par! \n" : "Impar! \n");

    // && = and, || = or, ! = not

    int temp = 25;
    if (temp > 10 && temp < 30){
        std::cout << "Ta de boa! \n";
    } else if(temp <= 10 || temp > 30){
        std:: cout << "To mal... \n";
    }

    bool sunny = false;
    if(!sunny){
        std::cout << "Ta ensolarado\n";
    }

    std::string name;
    std::cout << "Qual seu nome? \n";
    std::getline(std::cin, name);

    std::cout << name.length() <<  "\n";

    // bool -> vazio = true
    if (name.empty()){
        std::cout << "Nome está vazio \n";
    } else{
         std::cout << "Olá, " << name << "!\n";
    }

    name.clear();
    std::cout << "Seu nome é " << name << "\n";

    name.append("@gmail.com");
    std::cout << "Seu email é " << name << "\n";

    // char por index
    std::cout << name.at(0) << "\n";

    // inserir na posição x o caractere y
    name.insert(0, "@");
    std::cout << "Seu nome é " << name << "\n";

    std::cout << name.find("g") << "\n";

    name.erase(0, 2);
    std::cout << "Seu nome é " << name << "\n";
    return 0;
}