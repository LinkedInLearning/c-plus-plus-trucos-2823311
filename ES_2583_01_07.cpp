/*
 * Curso: C++ Trucos
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<float> sueldos;
    vector<float>::iterator it;

    for(it=sueldos.begin();it != sueldos.end();it++){
        cout << *it << endl;
    }

    return 0;
}
