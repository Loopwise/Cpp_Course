// S = 1 + 2 + 3 + 4 +....+ N
// S = 1 + 3 + 5 + 7 + ... + 2N-1

// Comprobar si un número es primo o no
#include <iostream>

using namespace std;

int main(){
    int c = 1;
    int N = 10;
    int S = 0;
    while(c <= N){
        if(c%2==1)
            S = S + c; // Acumulador Aditivo
        c++; // Contador
    }
    cout << S << endl;
    return 0;
}