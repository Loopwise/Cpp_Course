// Comprobar si un número es primo
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int a = 10, b = 40;

int azar(){
    return a + rand()%(b - a + 1);
}

bool is_prime(int n){
    int d = 0; // Variable local
    for(int i = 1; i <= n; i++){
        if(n%i==0)
            d++;
    }
    return d == 2;
}

int main(){
    // Aleatorios
    srand(time(NULL));
    int x = azar();
    int y = azar();
    int z = azar();
    cout << x << ' ' << y << ' ' << z << endl;

    // Los primos
    for(int i = 1; i < 100; i++)
        cout << i << ' ' << is_prime(i) << endl;
    return 0;
}