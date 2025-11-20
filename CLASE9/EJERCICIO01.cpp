/*
Detectar si un numero es primo o no es primo
*/

#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Ingrese su numero: ";
    cin>>n;

    int i=1;
    int contador=0;

    while(i<=n){
        if(n % i == 0){
            contador++;
        }
        i++;
    }

    if(contador == 2){
        cout<<"Es un numero primo"<<endl;
    }else{
        cout<<"Es un numero compuesto"<<endl;
    }


    return 0;
}