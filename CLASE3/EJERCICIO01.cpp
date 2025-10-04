/*
Escriba un programa para hallar la suma de enteros hasta un limite
Pide al usuario ingresa renteros positivos 
- Usando do while sumar los enteros ingresados hasta que la suma alcance o supere 50
- validar que cada numero sea positivo mayor que cero, sino mostrar mensaje de error y pedir otro numero
- finalmente mostrar la suma total y el numero de valores ingresados
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    int contador = 0;
    int suma = 0;

    do{
        cout<<"Ingrese un numero positivo: ";
        cin>>n;

        if(n < 0){
            cout<<"El numero ingresado es invalido, ingresar un valor positivo"<<endl;
        }
        else{
            suma = suma + n;
            contador = contador + 1;
        }
    }while(suma < 50);

    cout<<"--------------------"<<endl;
    cout<<"La suma total es: "<<suma<<endl;
    cout<<"EL numero de valores ingresados es: "<<contador<<endl;

    return 0;
}