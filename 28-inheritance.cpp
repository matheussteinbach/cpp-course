#include <iostream>

class Animal{
    public:
        bool alive = true;

        void eat(){
            std::cout << "Tamo comendo tamo comendo \n";
        }
};

class Dog : public Animal{
    public:

        void bark(){
            std::cout << "Auau \n";
        }
};

class Cat : public Animal{
    public:
        void meow(){
            std::cout << "Miau \n";
        }
};

int main(){

    Dog dog;

    Cat cat;

    std::cout << dog.alive<< "\n";

    dog.eat();
    dog.bark();

    std::cout << cat.alive<< "\n";

    cat.eat();
    cat.meow();

    return 0;
}