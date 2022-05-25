#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));
    // rand() genera números aleatorios entre 0 y 2147483647 = 2^31 - 1
    // a + rand()%(b - a + 1)
    int a = 1, b = 40;
    int p = a + rand()%(b-a+1);

    cout << "p: " << p << endl;

    if(p%2 != 1){
        cout << "El numero es par" << endl;
        return 0;
    }

    cout << "El numero es impar" << endl;
    return 0;
}