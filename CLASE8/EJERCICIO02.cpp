/*
8. Escriba un programa en C ++ que te permita eliminar o cambiar un elemento de una matriz en la
posicion deseada.

-> generar una matriz n*n con valores aleatorios
-> mostrar la matriz
-> preguntar al usuario si quiere eliminar o modificar un elemento en especifico
-> si, que ingrese la posiocion y el valor por el cual quiere camibarlo
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

    srand(time(NULL)); //semilla

    int n;
    cout<<"Ingrese dimension de la matriz: ";
    cin>>n;

    int matriz[100][100];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            matriz[i][j] = rand() % 100;
        }
    }

    // imprimir matriz
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matriz[i][j]<<"   ";
        }
        cout<<endl;
    }

    // preguntar al suuario
    cout<<"========================"<<endl;
    char respuesta;
    cout<<"Desea modificar algun valor de la matriz? (S/N): ";
    cin>>respuesta;

    if(respuesta != 'S'){
        cout<<"No deseas modificar, fin del programa"<<endl;
    }else{
        int i,j, nuevo_valor;
        cout<<"Ingrese la fila del valor a modificar: ";
        cin>>i;
        cout<<"Ingrese la columna del valor a modificar: ";
        cin>>j;
        cout<<"Ingrese el nuevo valor: ";
        cin>>nuevo_valor;

        matriz[i-1][j-1] = nuevo_valor;

        cout<<"==================="<<endl;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout<<matriz[i][j]<<"   ";
                }
                cout<<endl;
            }
    }

    return 0;
}
