#include <iostream>

using namespace std;

int main(){
    // (condicion) ? (si es cierto):(si no es cierto)
    // Muestre si una persona es mayor o menor de edad
    // Mostrar si un número es par o impar
    int a;
    cin >> a;
    bool valor = (a%2) != 0; // != 
    cout << (valor ?"Es impar" : "Es par");
    return 0;
}