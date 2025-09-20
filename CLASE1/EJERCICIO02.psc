// (Sumar los Primeros N Números Naturales ) Escribe un algoritmo que calcule
// la suma de los primeros n números naturales (1 + 2 + ... + n).
// Conceptos: Bucles, suma.

Algoritmo EJERCICIO02
	
	Definir n, i, suma Como Entero
	
	Escribir "Ingrese el valor de n"
	Leer n
	
	suma <- 0
	
	Para i<-1 Hasta n Con Paso 1
		
		suma <- suma + i
		
	FinPara
	
	Escribir suma
	
FinAlgoritmo