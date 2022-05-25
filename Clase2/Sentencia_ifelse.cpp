#include <iostream> // C++
#include <stdio.h> // Pueden investigarlo -> C
#include <time.h>
#include <math.h>

using namespace std;

int main(){
    srand(time(NULL));
    int a = 0, b = 50;

    int x = a + rand()%(b-a+1);
    float valor;

    cout << "x: " << x << endl;

    if(0 <= x && x <= 6){
        valor = 18*x; 
    }else if(6 < x && x <= 14){
        valor = 120 - 2*x;
    }else if(14 < x && x <= 24){
        valor = 288 - 14*x;
    }else if(24 < x && x <= 32){
        valor = -3.0/4*x*x + 48*x - 768;
    }else{
        cout << "VALOR FUERA DE RANGO.";
        return 0;
    }
    
    cout << "M(x): " << valor << endl;
    return 0;
}