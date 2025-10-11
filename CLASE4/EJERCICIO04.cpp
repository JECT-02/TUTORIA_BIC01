/*

Intercalado de cifras
Escriba un programa que reciba un valor numérico (sin validación de instanciación <Int>).
El resultado debe construirse intercalando las cifras del número original desde la última
(unidades), colocándolas alternadamente a la derecha y izquierda del nuevo valor.
Por ejemplo:
n ← 39371 ⇒ resultado → 97133
*/


#include<iostream>
#include<cmath>

using namespace std;


int main(){

    int n;
    cout<<"Ingrese el numero: ";
    cin>>n;

    int i=1;
    int suma = 0;
    while(n>0){
        int cifra = n % 10;
        if(i % 2 != 0){
            suma = suma * 10 + cifra;
        }else{
            suma = suma + cifra * pow(10,i-1);
        }
        i++;
        n = n/10;
    }

    cout<<"Resultado: "<<suma<<endl;

    return 0;
}

