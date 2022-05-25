// Serie de los números naturales hasta que
// sea a lo mucho 35
#include <iostream>

using namespace std;

int main(){
    int s = 0;
    // && -> AND V AND V = V
    // || -> OR F OR F = F
    // ! -> NOT
    for(int i = 0; i <= 10 && s <= 35; i++){
        cout << i << endl;
        s = s + i;
    }
    cout << s << endl;
    return 0;
}