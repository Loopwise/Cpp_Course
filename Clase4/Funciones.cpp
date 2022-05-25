#include <iostream>

using namespace std;

// f(x) = x^2 + 1
float f(float x){
    return 1.0*x*x + 1;
}

int sumar(int a, int b){
    return a + b;
}

void saludar(){
    cout << "Hola Mundo" << endl;
    return;
}

float abs(float x){
    if(x < 0)
        return -x;
    return x;
}


int main(){
    saludar();
    cout << abs(3) << endl;
    cout << sumar(3, 5) << endl;
    cout << f(4);
    return 0;
}