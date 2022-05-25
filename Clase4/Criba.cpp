#include <iostream>

using namespace std;

const int N = 10;
bool is_prime[N];

void criba(){
    // Suponiendo que todos los números son primos
    for(int i = 0; i < N; i++)
        is_prime[N] = true;

    // Eliminando los casos base
    is_prime[0] = is_prime[1] = false;

    // Ejecución del código
    for(int i = 2; i < N; i++){
        if(is_prime[i] == false)
            continue;
        for(int j = 2; i*j < N; ++j){
            is_prime[i*j] = false;
        }
    }
}

bool comp_primo(int n){
    int d = 0; // Variable local
    for(int i = 1; i <= n; i++){
        if(n%i==0)
            d++;
    }
    return d == 2;
}

int main(){
    criba();
    for(int i = 0; i<N; i++)
        cout << i << ' ' << is_prime[i] << endl;
    return 0;
}