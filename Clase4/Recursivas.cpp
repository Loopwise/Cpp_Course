// Funciones que se llaman a sí mismas
// fib(n+1) = fib(n) + fib(n-1)
// fib(n) = fib(n-1) + fib(n-2) // Forma recursiva base
// fib(0) = fib(1) = 1  -> Condición de parada
#include <iostream>

using namespace std;

int fib(int n){ // fib(3) = fib(2) + fib(1) -> fib(1) -> 2^n
    if(n == 0 || n == 1)
        return 1;
    return fib(n-1) + fib(n-2);
}

int SOD(int n){
    if(n==0)
        return 0;
    return n%10 + SOD(n/10);
}

int main(){
    cout << SOD(1234); // Recursion -> Limite de recursividad
    return 0;
}