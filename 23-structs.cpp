#include <iostream>

struct Student{
    std::string name;
    double gpa;
    bool enrolled = true;

};

void printStudent(Student student){
    // Copia do original
    std::cout << &student << '\n';
    std::cout << student.name << "\n";
    std::cout << student.gpa << "\n";
    std::cout << student.enrolled << "\n";
}

void changeEnrolled(Student &student){
    // Necessario passar por referencia para alterar o original
    student.enrolled = false;
}

int main(){
    Student student1;
    student1.name = "Vini";
    student1.gpa = 3.2;

    Student student2;
    student2.name = "Joao";
    student2.gpa = 2.2;

    std::cout << &student1 << '\n';

    changeEnrolled(student2);

    printStudent(student1);
    printStudent(student2);

    return 0;
}