/*

 Dibujo de un círculo con asteriscos
Representar mediante un diagrama de flujo un algoritmo que solicite al usuario ingresar
un número entero positivo que represente el radio r de un círculo. Luego, el programa
debe imprimir un círculo utilizando asteriscos (*) de acuerdo con la ecuación:
x**2 + y**2 = r**2
Los puntos dentro del círculo deben cumplir:
x**2 + y**2 ≤ r**2
*/


#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int r;
    cout<<"Ingrese el radio: ";
    cin>>r;

    for(int x = -r; x<=r; x++){
        for(int y=-r; y<=r; y++){
            if(x*x + y*y <= r*r){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}

/*

intervalo para x -> -r - r

*/