/*
Convertir numeros a binario con un bucle DO-WHILE hasta que el usuario quiera parar
*/


#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int n;
    char validacion;
    int binario = 0;
    int i = 0;

    do{
        cout<<"Ingrese el numero a convertir: ";
        cin>>n;
        binario = 0;
        i = 0;
        while(n>0){
            int resto = n%2;
            binario = binario + resto * pow(10,i);
            i++;
            n = n/2;
        }
        cout<<"---------------------"<<endl;
        cout<<"El numero en binario es: "<<binario<<endl;
        cout<<"Desea convertir otro numero (s/n): ";
        cin>>validacion;
        cout<<"---------------------"<<endl;


    }while(validacion == 's' || validacion == 'S');

    return 0;
}