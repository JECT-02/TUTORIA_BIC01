/*
Implemente un programa en C++ que nos permita convertir un n´umero de una base a otra. El programa
debe pedir un n´umero entero, la base en la que se encuentra y el sistema de base destino.
numero -> 
base inicial -> 
base objetivo ->
*/

#include<iostream>
#include<cmath>

using namespace std;

int base10(int n, int base){
    int i = 0;
    int suma = 0;
    while(n>0){
        suma = suma + (n%10) * pow(base,i);
        n = n/10;
        i++;
    }
    return suma;
}

int basen(int n, int base){
    int i=0;
    int suma = 0;
    int resto;
    while(n>0){
        resto = n%base;
        suma = suma + resto * pow(10,i);
        n = n/base;
        i++;
    }
    return suma;
}

int main(){

    int n, bi, bf;
    bool validacion;
    do{
        validacion = false;
        cout<<"Ingrese el numero: ";
        cin>>n;
        cout<<"Ingrese la base inicial del numero: ";
        cin>>bi;
        int aux = n;
        while(aux > 0){
            if (aux%10 >= bi){
                cout<<"El numero no esta correctamente escrito en la base"<<endl;
                validacion = true;
                break;
            }
            aux = aux/10;
        }

    }while(validacion);
    cout<<"Ingrese la base objetivo: ";
    cin>>bf;

    n = base10(n,bi);
    int numero_final = basen(n,bf);
    cout<<"EL numero el la nueva es: "<<numero_final<<endl;

    return 0;
}

