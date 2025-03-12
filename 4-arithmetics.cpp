#include <iostream>

int main(){
    int students = 20;
    //students = students + 1
    students += 1;
    students++;

    students -= 1;
    students--;

    students = students * 2;
    students*=2;

    students = students / 2;
    students /= 2;

    std::cout << students << "\n";

    // módulo
    int remainder = students % 3;

    std::cout << remainder << "\n";

    // type conversion
    // explicita
    double x = (int) 3.14;

    std::cout << x << "\n";

    // implicita para a tabela ASCII
    char y = 100;  
    std::cout << y << "\n";
    std::cout << (char) 100 << "\n";

    int correct = 8;
    int questions = 10;

    double score = correct/(double) questions * 100; // qualquer um dos dois em double para nao truncar

    std::cout << score << "%\n";

    return 0;
}