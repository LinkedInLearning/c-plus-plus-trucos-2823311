/*
 * Curso: C++ Trucos
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>

int main(){

    float sueldo = 2500.80;
    void * punteroGenerico = &sueldo;

    int edad;
    punteroGenerico = &edad;

    *(int *)punteroGenerico = 20;

    return 0;
}
