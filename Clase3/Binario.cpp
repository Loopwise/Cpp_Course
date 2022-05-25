#include <iostream>

using namespace std;

int main(){
    // 11 -> 1 1 0 1 -> 1011
    int n = 11;
    char d;
    string cadena = ""; // "a" + "b" -> "ab"
    while(n!=0){
        d = n%2 ? '1':'0';
        cadena = d + cadena;
        n = n/2;
    }
    cout << cadena;
    return 0;
}