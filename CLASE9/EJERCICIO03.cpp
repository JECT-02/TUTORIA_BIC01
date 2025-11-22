//Calcular la determinante de una matriz 3x3//

#include<iostream>

using namespace std;
	
float determinante(float matriz[][3]){
	
	float resultado;
	resultado = matriz[0][0] * (matriz[1][1]* matriz[2][2] - matriz[1][2] * matriz[2][1]) - matriz[0][1]* (matriz[1][0]* matriz[2][2] - matriz[1][2] * matriz[2][0]) + matriz[0][2] * (matriz[1][0]* matriz[2][1] - matriz[1][1] * matriz[2][0]);
	
	return resultado;
}
int main(){
	
	float matriz[3][3];
	int filas=3, columnas=3;
	for (int i=0; i<filas; i++){
		for(int j=0; j<columnas;j++){
			
			cout << "Digite un numero [" <<i<< "] [" <<j<< "] : ";
			cin >> matriz[i][j];
		}
	}
	
	float det = determinante(matriz);
	
	cout << "\n La determinante de la matriz es: " << det ;
	cout << endl;
	
	
	return 0;
}