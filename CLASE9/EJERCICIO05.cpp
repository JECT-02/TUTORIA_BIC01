#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Ingrese la cantidad de multiplos de 3 a operar: ";
    cin>>n;

    int suma=0, prod = 1;
    int i=1;

    while(i<=n){
        suma = suma + 3*i;
        prod = prod * 3*i;
        i++;
    }

    cout<<"Suma: "<<suma<<endl;
    cout<<"Producto: "<<prod<<endl;

    return 0;
}