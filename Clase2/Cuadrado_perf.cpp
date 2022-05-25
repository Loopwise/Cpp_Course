// Determinar si un número es cuadrado perfecto
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <math.h>

using namespace std;

int main(){
    srand(time(NULL));
    int a = 1, b = 10;

    int x = a + rand()%(b-a+1);

    int rq = sqrt(x); // sqrt(10) = 3.1241212 ->  3

    cout << "x: " << x << endl;

    if(rq*rq == x){ // abs(rq - x) < 1e-8
        cout << "Es cuadrado perfecto" << endl;
    }else{
        cout << "No es cuadrado perfecto" << endl;
    }

    return 0;
}