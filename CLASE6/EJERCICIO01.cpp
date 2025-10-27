/*
1. Escribe un programa que pida al usuario ingresar 5 números, los almacene en un arreglo
y luego muestre el número más grande y el más pequeño del arreglo.
*/

#include<iostream>
using namespace std;

int main(){

    float nums[5];

    for(int i = 0; i<5; i++){
        cout<<"Ingrese un numero: ";
        cin>>nums[i];
    }
    cout<<"Valores guardados correctamente"<<endl;

    float biggest = -1000000;
    float shortest = 1000000;

    for(int numero:nums){
        if(numero < shortest){
            shortest = numero;
        }
        if(numero > biggest){
            biggest = numero;
        }
    }
    cout<<endl;
    cout<<"====== RESULTS ======="<<endl;

    cout<<"El menor valor es: "<<shortest<<endl;
    cout<<"EL mayor valor es: "<<biggest<<endl;


    return 0;
}