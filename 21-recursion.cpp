#include <iostream>

/*void walk(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "Dei um passo!\n";
    }

}

void walk(int steps){
    if(steps > 0){
        std::cout << "Dei um passo!\n";
        walk(steps - 1);
    }
}*/

int factorial_i(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;
}

int factorial_r(int num){
    if(num > 1){
        return num * factorial_r(num - 1);
    } else {
        return 1;
    }
}

int main(){

    //walk(100);

    std::cout << factorial_i(10) << '\n';
    std::cout << factorial_r(10) << '\n';

    return 0;
}