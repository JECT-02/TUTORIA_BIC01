// 1. Realizar un programa que pida al usuario dos números y muestre la “distancia” entre
// os.

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float num1, num2;

    cout<<"Ingrese el primer numero: ";
    cin>>num1;

    cout<<"Ingrese el segundo numero:";
    cin>>num2;

    // |a-b|

    float distancia = abs(num1-num2);
    
    cout<<"-------------------------"<<endl;
    cout<<"El primer numero ingresado es "<<num1<<endl;
    cout<<"El segundo numero ingresado es "<<num2<<endl;
    cout<<"La distancia entre los numeros es "<<distancia<<endl;


    return 0;
}