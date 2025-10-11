/*

Aproximación de la función exponencial
Una de las formas de caracterizar a la función exponencial e
x
: R → R es mediante la
siguiente serie de potencias:
e**x
Construya un programa que, dado un valor de x, aproxime la función exponencial
sumando los primeros n términos de la serie anterior.
El programa debe determinar el número mínimo de términos n necesario para que la
diferencia entre la serie y el valor real de e
x
sea menor que 0,001.

*/

#include<iostream>
#include<cmath>

using namespace std;

int factorial(int n){
    double prod = 1;
    for(int i=1; i<=n; i++){
        prod = prod * i;
    }
    return prod;
}

int main(){

    int x;
    cout<<"Ingrese el exponente de e: ";
    cin>>x;

    double exponencial = exp(x);
    double tol = 0.001;
    int contador = 1;
    double suma = 1;
    while(abs(exponencial - suma)>=0.001){
        suma = suma + pow(x,contador)/factorial(contador);
        contador++;
    }


    cout<<"El total de iteraciones es: "<<contador<<endl;
    cout<<"El valor real de exp: "<<exponencial<<endl;
    cout<<"Valor aproximado es: "<<suma<<endl;
    return 0;
}