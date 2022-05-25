// Calcule la suma de dígitos de un número
#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int sod = 0;
    while(n!=0){
        // 123 -> 3 -> n%10
        // n/10 -> 2 -> n%10
        sod += n%10;
        n /= 10;
    }
    cout << sod;
    return 0;
}