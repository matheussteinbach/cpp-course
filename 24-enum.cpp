#include <iostream> 

// Caso nao declare os valores, padrao 0 1 2
enum Day{sexta = 0, sabado = 1, domingo = 2};

int main(){
    // Paired named-intenger constants
    Day today = domingo;

    // switch nao é possivel fazer com string
    switch(today){
        case sexta:
            std::cout << "Sextou! \n";
            break;
        case sabado:
            std::cout << "Sabadou! \n";
            break;
        case 2:
            std::cout << "Domingou! \n";
            break;
    }

    return 0;
}