/*
 * Curso: C++ Trucos
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>

class Empleado {
public:
    float getSueldo() const;
    inline float calcularSueldoTotalMensual() const {return (sueldoBase + comision);};
private:
    float sueldoBase, comision;
};

int main(){



    return 0;
}
