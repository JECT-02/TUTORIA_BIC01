/*
3. Escribe un programa que cree una matriz 5x5 de enteros, la llene con números aleatorios
entre 1 y 100, y luego encuentre y muestre el número más grande en la diagonal principal.
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


int main(){

    int matriz[5][5];

    srand(time(0));

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            matriz[i][j] = rand() % 100;
        }
    }

    int biggest = matriz[0][0];

    for(int i=0; i<5; i++){
        if(matriz[i][i]>biggest){
            biggest = matriz[i][i];
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<matriz[i][j]<<"     ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"El valor mas grande la diagonal principal es: "<<biggest<<endl;

    return 0;
}