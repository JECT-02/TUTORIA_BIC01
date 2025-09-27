// Ingresar un numero por consola y devolver el numero en binario

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    cout<<"Ingrese un numero entero: ";
    cin>>n;

    int aux = n;

    int result = 0;
    int i = 0;

    while(n != 0){
        int resto = n % 2;
        result = result + resto * pow(10,i);

        n = n/2;
        i = i+1;
    }

    cout<<"------------"<<endl;
    cout<<"EL numero en decimal es: "<<aux<<endl;
    cout<<"El numero en binario es: "<<result<<endl;

    return 0;
}

// n = n//2
// true
// false