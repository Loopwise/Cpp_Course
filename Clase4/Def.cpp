#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main(){
    // manzanas peras platanos
    // 1kg    0.5kg     1 mano
    // 8 3 5
    int arr[] = {8, 3, 5}; 
    int arr2[3]; // Espacio para un arreglo de 3
    arr2[0] = 8; // Primer elemento
    arr2[1] = 3; // Segundo elemento
    arr2[2] = 5; // Tercer elemento

    // Recorriendo un arreglo
    // Halllar la suma de los elementos de un array
    srand(time(NULL));
    const int N = 10;
    const int a = 0, b = 40;
    int arr0[N];
    int suma = 0;
    for(int i = 0; i < N; i++){
        arr0[i] = a + rand()%(b - a + 1);
        suma += arr0[i];
        cout << arr0[i] << ' ';
    }
    cout << "\nLa suma es: " << suma;

    // Encontrar el elemento mayor y el menor
    int m = arr0[0], M =arr0[0];
    for(int i = 0; i < N; i++){
        int aux = arr0[i];
        if(aux < m)
            m = aux;
        if(aux > M)
            M = aux;
    }
    cout << "\nEl mayor es: " << M;
    cout << "\nEl menor es: " << m;

    // Ordenar el arreglo
    for(int i=0; i < N; i++){
        for(int j=i+1; j < N; j++){
            if(arr0[i] > arr0[j]){
                int aux = arr0[j];
                arr0[j] = arr0[i];
                arr0[i] = aux;
            }
        }
    }

    cout << "\nArray ordenado: ";
    for(int i=0; i < N; i++){
        cout << arr0[i] << ' ';
    }
    return 0;
}