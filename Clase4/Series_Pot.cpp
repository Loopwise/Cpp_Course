#include <iostream>
#include <math.h>

using namespace std;

// Función que calcula el valor de PI
float val_PI(){
    float PI = 0;
    int signo = -1;
    for(int i = 1; i < 100000; i++){
        signo *= -1;
        PI += 4.0*signo/(2*i-1);
    }
    return PI;
}

// Función que retorna el valor del sen(x)
float my_sen(float x){
    float sum = 0;
    int signo = -1;
    float pot = 1.0/x;
    float fact = 1.0;
    for(int i = 0; i < 1000; i++){
        signo *= -1;
        pot *= 1.0*x*x;
        if(i != 0)
            fact /= 1.0*(2*i+1)*(2*i); // 5 -> /5 /4 i = 2  7 -> /7 /6 i = 3
        sum += signo*pot*fact; // res = 1*2*3*4 -> 1/res
    }
    return sum;
}

// Función que retorna el valor de exp(x) -> e^x
float my_e(float x){
    float sum = 0;
    float pot = 1.0;
    float fact = 1.0;
    for(int i = 0; i < 100; i++){
        if(i!=0){
            fact /= 1.0*i;
            pot *=x;
        }
        sum += pot*fact;
    }
    return sum;
}

int main(){
    const float PI = val_PI();
    float sen30 = my_sen(1.0*PI/6);
    cout << "El valor de PI es: " << PI << endl;
    cout << "El valor del sen(30): " << sen30 << endl;
    cout << "Sen(30): " << sin(1.0*PI/6) << endl;
    cout << "e: " << my_e(1);
    return 0;
}