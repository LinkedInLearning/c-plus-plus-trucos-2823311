/*
 * Curso: C++ Trucos
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>

class Empleado{
public:
    Empleado(float sueldoBase, float valorComisiones) : sueldoBase_(sueldoBase), valorComisiones_(valorComisiones){};
    inline float getSueldoBase() const {return sueldoBase_;};
    inline float getValorComisiones() const {return valorComisiones_;};
private:
    float sueldoBase_, valorComisiones_;
};

int main(){

    const Empleado *p_empleado = new Empleado(2500.80,150);

    return 0;
}
