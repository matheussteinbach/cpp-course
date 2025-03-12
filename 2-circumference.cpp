#include <iostream>
#include <vector>

// typedef usado para um apelido de um tipo de dado
// _t convenção para mostrar que eh um alias
typedef std::vector<std::pair<std::string,int>> pairlist_t; // lista pura

// typedef trocado por using hoje em dia
using text_t = std::string;

namespace first{
    // variaveis podem ter o mesmo nome se tiverem em namespaces diferentes
    double radius = 11;

    pairlist_t pairlist;
}

namespace second{
    double radius = 12;
}

int main(){
    // using namespace std;
    using std::cout;
    using std::string;
    // usado para escrever menos, namespace std varias funções que podem dar conflito

    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    cout << circumference << " cm\n";
    cout << first::radius << " cm\n";
    cout << second::radius << " cm\n";

    string monitor = "Samsung";

    // more const examples 
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    return 0;
}