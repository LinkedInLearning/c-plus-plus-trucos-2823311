/*
 * Curso: C++ Trucos
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>

class Empleado {
public:
    float getSueldo() const;
private:
    float sueldo;
};

int main(){

    return 0;
}

float Empleado::getSueldo() const {
    return sueldo;
}
