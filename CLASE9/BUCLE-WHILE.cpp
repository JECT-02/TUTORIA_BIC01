/*
BUCLE WHILE
*/

#include<iostream>
using namespace std;

int main(){

    int edad;

    cout<<"Ingrese su edad: ";
    cin>>edad;

    while(edad<18){
        cout<<"Usted es menor de edad, no puede votar"<<endl;
        edad++;
    }

    cout<<"Usted ya es mayor de edad"<<endl;

    return 0;
}