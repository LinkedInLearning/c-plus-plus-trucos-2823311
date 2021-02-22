/*
 * Curso: C++ Trucos
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <string>
using namespace std;

class Empleado {

public:

    inline int getEdad() const {return edad;};
    string getNombre() const;
    string getPrimerApellido() const;

private:

    int edad;
    string nombre;
    string primerApellido;
};

int main(){

    return 0;
}

string Empleado::getNombre() const {
    return nombre;
}

string Empleado::getPrimerApellido() const{
    return primerApellido;
}
