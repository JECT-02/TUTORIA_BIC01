/*
2. Hacer un programa que lea los valores ingresados por el usuario en una matriz de
enteros bidimensional de tamaño fijo (p. ej., 3 filas y 2 columnas).
Haga que el programa encuentre la matriz transpuesta de la matriz ingresada
Finalmente, imprimir con claridad tanto la matriz original, la transpuesta
y los elementos maximo y minimo de la matriz.
*/

#include<iostream>
using namespace std;

int main(){

    int matriz[3][2];
    int transpuesta[2][3];

    cout<<"Ingrese los valores de la matriz [3][2]"<<endl;

    for(int i = 0; i<3; i++){
        for(int j=0; j<2; j++){
            cout<<"Ingrese el elemento ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }


    // Encontrar transpuesta
    for(int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
            transpuesta[j][i] = matriz[i][j];
        }
    }

    // econtrar mayor y menor
    int mayor = -10000;
    int menor = 100000;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
            if(matriz[i][j]<menor){
                menor = matriz[i][j];
            }
            if(matriz[i][j] > mayor){
                mayor = matriz[i][j];
            }
        }
    }


    cout<<".:Matriz original:."<<endl;
    for(int i=0; i<3; i++){
        for(int j = 0; j<2; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<".:Matriz transpuesta:."<<endl;
    for(int i=0; i<2; i++){
        for(int j = 0; j<3; j++){
            cout<<transpuesta[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"================================"<<endl;
    cout<<"Valor mayor: "<<mayor<<endl;
    cout<<"Valor menor: "<<menor<<endl;

    return 0;
}