#include <iostream>

class Human{
    public:
        std::string name;
        int age;
        std::string occupation = "Programador";

        void eat(){
            std::cout << "Esnupi o que você quer do bk? \n";
            std::cout << "Aborge \n";
        }

        void drink(){
            std::cout << "Cerveja \n";
        }

};

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    // Constructor feito explicitamente 
    Student(std::string x, int y, double z){
        /*this->name = name;
        this->age = age;
        this->gpa = gpa;*/
        // Caso tenha o mesmo nome nas variaveis necessario usar o this
        name = x;
        age = y;
        gpa = z;
    }
};


int main(){

    Human human1;
    human1.name = "Vini";
    human1.age = 19;

    std::cout << human1.name << "\n";
    std::cout << human1.occupation << "\n";
    std::cout << human1.age << "\n";

    // Diferente de structs, classes possuem métodos e objetos podem performar ações

    human1.eat();
    human1.drink();

    Student student1("João", 19, 2.1);

    std::cout << student1.name << "\n";
    std::cout << student1.gpa << "\n";
    std::cout << student1.age << "\n";

    return 0;
}