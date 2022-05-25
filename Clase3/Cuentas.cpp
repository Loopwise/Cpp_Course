#include <iostream>

using namespace std;

int main(){
    int c = 1;
    while(c <= 100){
        if(c%3==0)
            cout << c << endl;
        c++;
    }
    return 0;
}