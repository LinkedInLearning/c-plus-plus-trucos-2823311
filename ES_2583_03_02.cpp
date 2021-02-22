#include <iostream>
using namespace std;

// https://es.cppreference.com/w/cpp/language/operator_precedence

int main(){

    int a = 80, b=3, c=6;
    bool resultado = 4-a*8 || b / 4 != 9 && c % 4 == 3 || !false || a >= b;

    cout << resultado << endl;

    return 0;
}