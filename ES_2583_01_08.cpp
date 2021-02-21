/*
 * Curso: C++ Trucos
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
using namespace std;

int main(){

    int array[10][9][10];

    for(int i=0;i<10;i++){
        for(int j=0;j<9;j++){
            for(int k=0;k<10;k++){
                array[i][j][k]=0;
            }
        }
    }

    return 0;
}
