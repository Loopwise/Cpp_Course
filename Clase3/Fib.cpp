#include <iostream>

using namespace std;

int main(){
    // 1 1 2 3 5 8 13 21 .....
    // tn+1 = tn + tn-1
    int t0 = 0, t1 = 1;
    for(int i = 0; i < 15; i++){
        int sig = t0 + t1;
        t0 = t1;
        t1 = sig;
        // t0 1 -> t0 t1_ant
        // t1 2 -> t1 3 sig_ant
        // sig 3 -> sig t0 + t1
        cout << t0 << ' ';
    }

    return 0;
}