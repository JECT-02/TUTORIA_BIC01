/*
cuadro n*n
60% para triangulo
40% para rectangulo
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;

    cout<<"Ingrese las dimensiones de la flecha: ";
    cin>>n;

    int triangulo = 0.5 * n;
    int rectangulo = n - triangulo;

    // dibujar triangulo
    int centro = (n+1)/2;

    for(int i=0; i<triangulo; i++){
        int limite_inferior = centro-i;
        int limite_superior = centro+i;
        for(int j=0; j<n; j++) {
            if(j>= limite_inferior && j<=limite_superior){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    // dibujar rectangulo

    int limite_rectangulo_inferior = n/3;
    int limite_rectangulo_superior = 2*n/3;

    for(int i=0; i<=rectangulo; i++){
        for(int j=0; j<=n; j++){
            if(j>= limite_rectangulo_inferior && j<= limite_rectangulo_superior){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}

/*

Ingrese las dimensiones de la flecha: 25

            *             
           ***            
          *****           
         *******          
        *********         
       ***********        
      *************       
     ***************      
    *****************     
   *******************    
  *********************   
 ***********************  
************************* 
**************************
**************************
**************************
        *********         
        *********         
        *********         
        *********         
        *********         
        *********         
        *********         
        *********         
        *********         
        *********         
        *********
*/


