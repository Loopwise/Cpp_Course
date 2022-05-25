// Calcular el área al cuadrado de un triángulo dados sus lados
#include <iostream>

using namespace std;

int main(){
    // Programa que muestre el área de un círculo
    // dado un radio ingresado por teclado
    // pi*R^2
    float r;
    cout << "Ingrese el valor del radio: ";
    cin >> r;

    const float PI = 3.141592;
    float s = PI*r*r;
    cout << "Radio: " << r << endl;
    cout << "PI: " << PI << endl;
    cout << "Area: " << s << endl;

    return 0;
}