/*
Serie de fibonacci con while
cantidad de elementos -> condicion de finalizacion
*/

#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Ingrese cuantos valores de la serie desea: ";
    cin>>n;

    int a=1;
    int b=1;
    int contador = 2;
    cout<<".: SERIE DE FIBONACCI :."<<endl;
    cout<<a<<"   "<<b<<"   ";
    while(contador<n){
        int aux = b;
        b = a + b;
        a = aux;
        cout<<b<<"   ";
        contador++;
    }

    return 0;
}