/*
Crear una funcion rotarArreglo(int arr[], int n) que rote todos los elementos una posicion
a la derecha
*/

#include<iostream>
using namespace std;

void rotarArreglo(int arr[], int n){
    int aux = arr[n-1];
    for(int i=n-1; i>=1;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = aux;
}

int main(){

    int array[6] = {1,3,4,7,9,2};
    rotarArreglo(array,6);

    for(int i=0; i<6; i++){
        cout<<array[i]<<"  ";
    }
    

    return 0;
}