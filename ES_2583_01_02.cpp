/*
 * Curso: C++ Trucos
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string nombre;
    int edad;

    do {
        cout << "Introduce tu nombre: ";
        cin >> nombre;

        cout << "Introduce tu edad: ";
        cin >> edad;

        if (edad >= 18) cout << "Bienvenido " + nombre << endl;
        else cout << "Eres menor de edad. No puedes utilizar nuestro sistema." << endl;
    
    } while(edad < 18);
    
    return 0;
}