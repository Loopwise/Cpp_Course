#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));
    int a = 1, b = 40;

    int x = a + rand()%(b-a+1);
    int y = a + rand()%(b-a+1);

    int M, m;

    if(x>y){
        M = x, m = y;
    }else{
        M = y, m = x;
    }

    int z = a + rand()%(b-a+1);
    if(z > M) {
        M = z;
    }else if(z<m){
        m = z;
    }

    int med = x + y + z - M - m;

    cout << x << " " << y << " " << z << endl;

    if(m*m + med*med == M*M){
        cout << "Tripleta pitagorica." << endl;
    }else{
        cout << "NO es tripleta pitagorica" << endl;
    }
    return 0;
}