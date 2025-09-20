// pedir un numero al usuario
//indicar si es positivo o negativo o cero
// indicar si es decimal o entero exacto
Algoritmo EJERCICIO1
	Escribir "Ingrese un numero: "
	Leer num
	
	// verificar si el numero es positivo o negastivo o cero
	Si num > 0
		Escribir "El numero es positivo"
	SiNo
		Si num<0
			Escribir "El numero es negativo"
		SiNo
			Escribir "El numero es cero"
		FinSi
	FinSi
	
	// indicar si el numero es decimal o entero
	// funcion trunc
	
	Si num = Trunc(num)
		Escribir "El numero es entero"
	SiNo
		Escribir "EL numero es decimal"
	FinSi
	
FinAlgoritmo

