// Crear un código que permita utiizar la fórmula de Herón
// Un código que permita calcular la potencia entera de un número: 2^5
// Crear una función que me permita calcular el seno
// Calcular el valor de PI mediante una función

#include <iostream>
#include <math.h>

using namespace std;

float heron(float a, float b, float c){
    float p = a + b + c;
    p /= 2; // Semiperímetro
    float res = p*(p-a)*(p-b)*(p-c);

    return sqrt(res);
}

// Sin recursividad
float potencia(float x, int n){
    if(n == 0)
        return 1;
    float resultado = 1.0;
    for(int i = 0; i < n; i++)
        resultado *= x;
    return resultado;
}

// Con recursividad
float pot_rec(float x, int n){
    if(n == 0)
        return 1;
    return x*pot_rec(x, n-1);
}

int main(){
    cout << potencia(2, 3) << endl;
    cout << pot_rec(2, 3);
    return 0;
}