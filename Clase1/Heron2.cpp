#include <iostream>
#include <math.h>
#include <stdio.h>
#include <random>
using namespace std;

int main(){
    float a, b ,c;
    cout << "Ingrese los lados del triangulo: ";
    cin >> a >> b >> c;

    float p = 1.0*(a+b+c)/2; // Semiperímetro
    float s2 = 1.0*p*(p-a)*(p-b)*(p-c);

    cout << "El area al cuadrado es: " << s2;
    cout << "\nEl area es: " << pow(s2, 0.5);
    return 0;
}