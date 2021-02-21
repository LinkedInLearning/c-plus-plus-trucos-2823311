/*
 * Curso: C++ Trucos
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
using namespace std;

// https://es.cppreference.com/w/cpp/language/operator_precedence

int main(){

    int a = 80, b = 3, c = 6;
    int resultado = (4-a*8 / b / 4 + c) % 4;

    cout << "Resultado: " << resultado << endl;

    return 0;
}
