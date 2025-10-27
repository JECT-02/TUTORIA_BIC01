/*
4. Una empresa de transporte almacena en un arreglo las distancias (en kilómetros) desde su
almacén principal hacia diferentes ciudades. Este arreglo está ordenado en forma
ascendente. Implementar un programa que permita ingresar la distancia de un nuevo cliente,
a continuación:
Si existe una coincidencia exacta con alguna ciudad, mostrar dicha distancia.
Si no hay coincidencia exacta, mostrar la ciudad cuya distancia sea la más cercana a la
ingresada.
Ejemplo:
Entrada
[50, 120, 180, 240, 310, 400, 500, 610, 720, 850]
Distancia del nuevo cliente: 315
Salida
No se encontró una coincidencia exacta.
*/

#include<iostream>
#include<cmath>
using namespace std;

void search(float target, float distancias[10]){
    for(int i=0; i<9; i++){
        if(target == distancias[i]){
            cout<<"Distancia coincidente con la ciudad "<<i<<endl;
            break;
        }else if(target == distancias[i+1]){
            cout<<"Distancia coincidente con la ciudad "<<i+1<<endl;
            break;
        }else{
            if(target>distancias[i] && target<distancias[i+1]){
                float cota1 = abs(target-distancias[i]);
                float cota2 = abs(target-distancias[i+1]);
                if(cota1 <= cota2){
                    cout<<"No se encontro coincidencia, la ciudad mas cercana es: "<<i<<endl;
                    break;
                }else{
                    cout<<"No se encontro coincidencia, la ciudad mas cercana es: "<<i+1<<endl;
                    break;
                }
            }
        }
    }
}

int main(){

    float distancias[10] = {50, 120, 180, 240, 310, 400, 500, 610, 720, 850};

    float dist_client;

    cout<<"Ingrese la distancia del nuevo cliente: ";
    cin>>dist_client;

    cout<<"============"<<endl;
    for(float distancia:distancias){
        cout<<distancia<<"   ";
    }
    cout<<endl;
    cout<<"============"<<endl;

    search(dist_client, distancias);

    return 0;
}