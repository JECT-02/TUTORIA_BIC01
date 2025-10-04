/*
Crear un programa que permita adivinar un valor secreto (ej. 50) 
debe ingresar constatemente hasta adivinar, y debemos darle pistes (muy alto, muy bajo)
usar DO-WHILE con break para terminar
*/

#include <iostream>

using namespace std;

int main(){

    int secreto = 70;
    int n;
    bool validar = true;

    do{
        cout<<"Adivine el numero: ";
        cin>>n;

        if(n == secreto){
            cout<<"Adivinaste el numero"<<endl;
            validar = false;
        }else if(n < secreto){
            cout<<"Muy bajo!"<<endl;
        }else if(secreto < n){
            cout<<"Muy alto!"<<endl;
        }
    }while(validar);

    return 0;
}