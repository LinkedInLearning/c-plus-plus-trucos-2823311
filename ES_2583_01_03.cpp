/*
 * Curso: C++ Trucos
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> valores;
    int valorEscondido = 7, posicion;

    for(int i=0; i<valores.size();i++){
        if(valores[i] == valorEscondido){
            posicion = i;
            break;
        }
    }

    //...

    return 0;
}
