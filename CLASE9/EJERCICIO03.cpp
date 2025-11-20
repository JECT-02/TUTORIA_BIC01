/*
FACTORIAL DE UN NUMERO
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Ingrese el numero del cual quiere calcular su factorial: ";
    cin>>n;

    int factorial=1;
    int i = 1;

    while(i<=n){
        factorial = factorial * i;
        i++;
    }

    cout<<"El factorial es: "<<factorial<<endl;

    return 0;
}