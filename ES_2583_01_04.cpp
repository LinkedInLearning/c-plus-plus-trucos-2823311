/*
 * Curso: C++ Trucos
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> numerosElegidosParaElAlgoritmo;

    for(int i=0; i<100;i++){
        if(i%3 == 0 || i%7==0){
            if(i == 21) continue;
            numerosElegidosParaElAlgoritmo.push_back(i);
        }
    }

    return 0;
}
