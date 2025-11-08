/*
Lee las puntuaciones de 10 equipos (números enteros), almacénalas en un arreglo,
calcula la suma total de puntos y el promedio. Identifica también qué equipos estuvieron
por encima del promedio.
*/

#include<iostream>
using namespace std;

int main(){

    float puntuaciones[10];

    float suma = 0;
    float promedio;
    
    for(int i=0; i<10; i++){
        cout<<"Ingresa la puntuacion del equipo "<<i+1<<": ";
        cin>>puntuaciones[i];
    }

    // calcular suma y promedio
    for(int i=0; i<10; i++){
        suma = suma + puntuaciones[i];
    }

    promedio = suma/10;

    cout<<"La suma de pruntuaciones es: "<<suma<<endl;
    cout<<"El promedio de puntuaciones es: "<<promedio<<endl;

    cout<<".: Puntuaciones mayores al promedio :."<<endl;
    for(int i=0; i<10; i++){
        if(puntuaciones[i]>promedio){
            cout<<puntuaciones[i]<<endl;
        }
    }

    return 0;
}