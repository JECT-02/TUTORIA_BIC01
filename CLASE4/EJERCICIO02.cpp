/*
Se dice que un número entero positivo n es un factorion si
la suma de los factoriales de sus dígitos es igual al número mismo.

Por ejemplo: 145 = 1! + 4! + 5! 
Escriba un programa en C++ que:
Lea un número entero positivo.e imprima todos los factoriones
menor o igual a n.
*/


#include<iostream>
#include<cmath>

using namespace std;

int main(){

    
    int n;
    cout<<"Ingrese un valor entero positivo: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        int suma = 0;
        int aux = i;
        while(aux>0){
            int resto = aux % 10;
            int prod = 1;
            for(int j = 1; j<= resto; j++){
                prod = prod * j;
            }
            suma = suma + prod;
            aux = aux / 10;
        }
        if(suma == i){
            cout<<"El numero "<<i<<" es factorial"<<endl;
        }
    }

    return 0;
}

