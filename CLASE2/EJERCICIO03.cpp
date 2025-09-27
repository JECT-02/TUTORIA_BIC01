/*
Escribir un programa que permita encontrar todas las ternas (x, y, z) de números enteros
positivos, menores una cota K dada por el usuario, que cumplan las siguientes propiedades:
 i. Debe verificar la relación: x² + y² = z²
 ii. No debe haber ternas que sean múltiplos. Por ejemplo, si (a, b, c) cumple i) cualquier terna
de la forma (ta, tb, tc), con t entero positivo, también cumplirá i). Por lo que basta considerar la
terna (a, b, c).
iii. Solo considerar las ternas (x, y, z) con x <y, pues la terna (3, 4, 5) se considera equivalente
a la terna (4, 3, 5).
Ejemplo:
Ingrese la cota: 10
Las ternas que verifican i), ii) y iii) son:
3 4 5
Ingrese la cota: 18
Las ternas que verifican i), ii) y iii) son:
3 4 5
5 12 13
8 15 17
*/
#include <iostream>
#include <cmath>

using namespace std;

int mcm(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main(){
    int k;
    cout<<"Ingrese la cota superior: ";
    cin>>k;

    cout<<"Valores que funcionan"<<endl;

    for(int x=1; x<k; x++){
        for(int y=x+1; y<k; y++){
            int suma_cuadrados = x*x + y*y;
            int raiz = sqrt(suma_cuadrados);
            if(raiz*raiz == suma_cuadrados && raiz<k && mcm(x,mcm(y,raiz)) == 1){
                cout<<"El valor de x: "<<x<<endl;
                cout<<"El valor de y: "<<y<<endl;
                cout<<"El valor de z: "<<raiz<<endl;
                cout<<"---------------------"<<endl;
            }
        }
    }

    return 0;
}