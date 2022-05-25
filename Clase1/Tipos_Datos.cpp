#include <iostream>

using namespace std;

int main(){
    // Operaciones
    int a; // -> De tipo entero y no tiene valor
    a = 6; // a tiene el valor de 6

    int b = 18; // b tiene el valor de 18

    float c = 1.0*a/b;
    
    cout << a + b << endl;
    cout << a - b << endl;
    cout << c << " " << a*b << endl; // (int) (operacion) (int) -> (int)

    // Modulo
    cout << b%a << endl; // Resto de a/b
    return 0;
}