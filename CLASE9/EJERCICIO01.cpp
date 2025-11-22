/*
crea una funcion esPrimo(int n) que determine si un numero es primo. utilizar sqrt(n)
*/

#include<iostream>
#include<cmath>

using namespace std;

bool esPrimo(int n){
    int raiz = sqrt(n);
    int divisores=0;
    for(int i = 1; i<=raiz; i++){
        if(n%i == 0){
            divisores++;
        }
    }
    if(divisores==1){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Ingrese su numero: ";
    cin>>n;

    bool resultado;
    resultado = esPrimo(n);

    if(resultado == true){
        cout<<"El numero es primo."<<endl;
    }else{
        cout<<"El numero es compuesto."<<endl;
    }

    return 0;
}