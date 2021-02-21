/*
 * Curso: C++ Trucos
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    bool impuestosPendientesDePago;
    // impuestosPendientesDePago = ...

    string indicacionImpuestos = impuestosPendientesDePago ? "Quedan impuestos pendientes de pago" : "Estás al día con el pago de impuestos";

    cout << indicacionImpuestos;
    
    return 0;
}