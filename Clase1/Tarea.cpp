#include <stdio.h>
#include <time.h>
#include <iostream>

using namespace std;

int main(){
    srand(time(NULL));
    // rand() genera números aleatorios entre 0 y 2147483647 = 2^31 - 1
    // a + rand()%(b - a + 1)
    int a, b;
    cin >> a >> b;
    int p = a + rand()%(b-a+1);
    cout << p << endl;
    return 0;
}