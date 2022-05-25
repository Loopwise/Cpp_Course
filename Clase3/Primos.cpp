#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));
    int a = 1, b = 50;
    int x = a + rand()%(b - a + 1);
    cout << "x: " << x << endl;

    // Contando la cantidad de divisores
    int c = 1;
    int d = 0;
    while(c <= x){
        if(x%c==0)
            d++;
        c++;
    }

    if(d==2)
        cout << "El numero es primo.";
    else
        cout << "El numero NO es primo.";
    return 0;
}