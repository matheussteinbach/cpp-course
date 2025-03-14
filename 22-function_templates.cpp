#include <iostream>

// Template usado para nao ter que reescrever varias vezes a mesma funcao para diferentes tipos de dados (overloaded functions)
// Por convencao usado T. U está sendo usado para poder ter mais de um tipo na comparação

template <typename T, typename U>

// compilador retorna com o tipo certo automaticamente usando o auto
auto max(T x, U y){
    return (x > y) ? x : y;
}


int main(){
    std::cout << max(2.5, 2) << "\n";

    return 0;
}