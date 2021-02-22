/*
 * Curso: C++ Trucos
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>

class Empleado {
public:
    Empleado(float sueldo);
    inline float getSueldo() const {return sueldo_;};
    float operator +(const Empleado& e);
private:
    float sueldo_;
};

int main(){

    Empleado *empleado1 = new Empleado(2500);
    Empleado *empleado2 = new Empleado(2500);

    float sueldoTotal = *empleado1 + *empleado2;
    
    return 0;
}

Empleado::Empleado(float sueldo){
    sueldo_ = sueldo;
}

float Empleado::operator +(const Empleado& e){
    return (sueldo_ + e.getSueldo());
}
