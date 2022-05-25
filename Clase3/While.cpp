#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));
    int a = 1, b = 6;

    int c = 1;

    int x = a + rand()%(b-a+1);
    cout << x << endl;
    while(x != 3){
        x = a + rand()%(b-a+1);
        cout << x << endl;
        c++; // c = c + 1; c += 1; c--; c -= 1;
    }

    cout << "Programa finalizado." << endl;
    cout << "En el lanzamiento #" << c << endl;
    return 0;
}