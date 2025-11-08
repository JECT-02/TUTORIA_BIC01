/*
Escribe un programa que pida al usuario 5 números reales y guardar en un arreglo y luego los muestre en orden
inverso.
*/

#include<iostream>
using namespace std;

int main(){

    int numeros[5];

    for(int i=0; i<5; i++){
        cout<<"Ingrese un numero: ";
        cin>>numeros[i];
    }
    cout<<"==============="<<endl;
    cout<<"Valores en orden inverso"<<endl;
    for(int i=4; i>=0; i--){
        cout<<numeros[i]<<endl;
    }
    

    return 0;
}