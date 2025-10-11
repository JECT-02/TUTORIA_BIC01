/*

 Juego de los 23 cerillos
El juego de los 23 cerillos se juega entre dos participantes.
El juego consiste en colocar 23 cerillos sobre la mesa. En cada turno, un jugador puede
retirar 1, 2 o 3 cerillos. El jugador que retire el último cerillo pierde y queda eliminado.
Realice un programa que permita a dos participantes jugar al juego de los 23 cerillos.
Inicia el juego
||||| ||||| ||||| ||||| |||
Jugador 1 retira: 3
||||| ||||| ||||| |||||
Jugador 2 retira: 3
||||| ||||| ||||| ||

*/

#include<iostream>

using namespace std;

void graficar(int n){
    for(int i=1; i<=n; i++){
        cout<<"|";
        if(i%5 == 0){
            cout<<" ";
        }
    }
    cout<<endl;
}

bool validacion(int n, int jugada){
    if(jugada != 1 && jugada != 2 && jugada != 3){
        cout<<"Tu jugada debe ser 1 o 2 o 3"<<endl;
        return false;
    }
    if(jugada > n){
        cout<<"Cerillos insuficientes"<<endl;
        return false;
    }
    return true;
}

int main(){
    int n = 23;
    cout<<".:Inicia el juego:."<<endl;
    graficar(23);
    while(true){
        int jugada;
        do{
            cout<<"Jugador 1 retira: ";
            cin>>jugada;
        }while(!validacion(n,jugada));
        n = n - jugada;
        if(n == 0){
            cout<<"Juego terminado, gana jugador 1"<<endl;
            break;
        }
        graficar(n);
        do{
            cout<<"Jugador 2 retira: ";
            cin>>jugada;
        }while(!validacion(n,jugada));
        n = n-jugada;
        if(n == 0){
            cout<<"Juego terminado, gana jugador 2"<<endl;
            break;
        }
        graficar(n);
    }


    return 0;
}