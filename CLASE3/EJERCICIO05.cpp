/*
Realice un programa en C++ que, al recibir como dato un entero positivo, muestre todos los n´umeros
especiales que hay entre 1 y el n´umero dado. Adem´as el programa debe imprimir la cantidad de estos
n´umeros especiales y la suma de ellos. Los n´umeros especiales a determinar tienen la particularidad que la
suma de todos sus divisores propios es igual al mismo n´umero. Ejemplo: 6 cumple con esta condici´on, pues
sus divisores propios son: 1, 2, 3 y 6 = 1+2+3.
*/

# include<iostream>
using namespace std;

bool especial(int n){
    int i = 1;
    int suma = 0;
    while(i<=n/2){
        if(n%i == 0){
            suma = suma + i;
        }
        i++;
    }

    if(suma == n){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int numero;

    cout<<"Ingrese el numero tope: ";
    cin>>numero;

    for(int i=1; i<=numero; i++){
        if(especial(i)){
            cout<<"El numero: "<<i<<" es especial"<<endl;
        }
    }

    return 0;
}