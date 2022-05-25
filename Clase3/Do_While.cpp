#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));
    int a = 1, b = 6;

    int x;
    int c = 0;
    do{
        x = a + rand()%(b-a+1);
        cout << x << endl;
        c += 1;
    }while(x != 3);

    cout << "Programa finalizado." << endl;
    cout << "En el lanzamiento #" << c << endl;
    return 0;
}