/*
 * Curso: C++ Trucos
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>

class Empleado {
public:
    bool setEdad(int e);
private:
    int edad;
    float sueldo;
};

int main(){

    return 0;
}

bool Empleado::setEdad(int e){
    edad = e;
    return (edad==e);
}
