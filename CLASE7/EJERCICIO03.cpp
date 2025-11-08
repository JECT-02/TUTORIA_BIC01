/*
Dados los componentes de dos vectores en el espacio de tres dimensiones, escribir un
programa que permita:
Calcular la diferencia de los vectores dados.
Calcular su producto escalar.
Calcular su producto vectorial.
Decidir si los vectores son linealmente dependientes, es decir, si sus componentes
son proporcionales.
*/

#include<iostream>
using namespace std;

void pedir_valores(float arr[], int n){
    for(int i=0; i<n; i++){
        cout<<"Ingrese la coordenada "<<i+1<<": ";
        cin>>arr[i];
    }
}

int main(){
    float arr1[3], arr2[3];
    float resta[3], prod_escalar = 0, prod_vectorial[3];

    pedir_valores(arr1,3);
    cout<<endl;
    pedir_valores(arr2,3);

    // diferencia de vectores
    for(int i=0; i<3; i++){
        resta[i] = arr1[i] - arr2[i];
    }

    //producto escalar
    for(int i=0; i<3; i++){
        prod_escalar = prod_escalar + arr1[i]*arr2[i];
    }

    // producto vectorial
    prod_vectorial[0] = arr1[1]*arr2[2] - arr1[2]*arr2[1];
    prod_vectorial[1] = arr1[2]*arr2[0] - arr1[0]*arr2[2];
    prod_vectorial[2] = arr1[0]*arr2[1] - arr1[1]*arr2[0];

    // L.I.
    bool ld=true;
    for(int i = 0; i<3; i++){
        if(prod_vectorial[i] != 0){
            ld = false;
        }
    }

    
    cout<<endl;
    cout<<".: MOSTRAR RESULTADOS :."<<endl;
    cout<<"VECTORES INICIALES"<<endl;
    for(int i=0; i<3; i++){
        cout<<arr1[i]<<"   ";
    }
    cout<<endl;
    for(int i=0; i<3; i++){
        cout<<arr2[i]<<"   ";
    }
    cout<<endl;

    cout<<"Resta de vectores"<<endl;
    for(int i=0; i<3; i++){
        cout<<resta[i]<<"   ";
    }
    cout<<endl;

    cout<<"Producto escalar"<<endl;
    cout<<prod_escalar<<endl;

    cout<<"Pruducto vectorial"<<endl;
    for(int i=0; i<3; i++){
        cout<<prod_vectorial[i]<<"   ";
    }
    
    cout<<endl;

    cout<<"Prueba LI"<<endl;
    if(ld == true){
        cout<<"SON LD"<<endl;
    }else{
        cout<<"SON LI"<<endl;
    }

    return 0;
}