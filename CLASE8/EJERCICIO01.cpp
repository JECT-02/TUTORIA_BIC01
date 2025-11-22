/*
6. Escribir un programa que genere una matriz cuadrada (2D) de orden n con elementos aleatorios y
luego imprima el tercer valor mas bajo y si se repite que nos diga cuantas veces se repite.
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

    srand(time(NULL));

    int n;

    cout<<"Ingrese el tamaño de la matriz: ";
    cin>>n;

    int matriz[100][100];

    // llenar valores
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            matriz[i][j] = rand() % 100;
        }
    }

    // aplanar
    int plano[10000];
    int k=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            plano[k]=matriz[i][j];
            k++;
        }
    }

    //ordenar

    int total = n*n;

    // ordenamiento burbuja
    for(int i=0; i<total; i++){
        for(int j=0; j<total-1-i; j++){
            if(plano[j] > plano[j+1]){
                int aux = plano[j];
                plano[j] = plano[j+1];
                plano[j+1] = aux;
            }
        }
    }

    int tercer_valor = plano[2];
    int contador = 0;
    
    for(int i=0; i<total; i++){
        if(plano[i] == tercer_valor){
            contador++;
        }
    }

    //imprimir matriz
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matriz[i][j]<<"   ";
        }
        cout<<endl;
    }

    // mostrar tercer valor mas bajo
    cout<<"Tercer valor mas bajo: "<<tercer_valor<<endl;

    // numero de repeticiones
    cout<<"El tercer valor mas bajo aparece "<<contador<<" veces"<<endl;

    
    return 0;
}