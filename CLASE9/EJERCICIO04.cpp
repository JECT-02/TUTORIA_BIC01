/*
Dado un rango, obtener los numeros e impares no divisibles por cinco
*/

#include<iostream>
using namespace std;

int main(){

    int inf, max;
    cout<<"Ingrese limite inferior del rango: ";
    cin>>inf;

    cout<<"Ingrese el limite superior del rango: ";
    cin>>max;

    int pares = 0, impares=0;

    while(inf<=max){
        if(inf%2 == 0 && inf%5 != 0){
            pares++;
        }
        if(inf%2 != 0 && inf%5 != 0){
            impares++;
        }
        inf++;
    }

    cout<<"Cantidad de numeros pares es: "<<pares<<endl;
    cout<<"Cantidad de numeros impares es: "<<impares<<endl;

    return 0;
}