// Escribir un algoritmo que pida los puntos centrales x1, y1 , x2, y2 y los radios r1, r2 de
//dos circunferencias y las clasifique en uno de los siguientes estados: exteriores, tangentes
//exteriores, secantes, tangentes interiores, interiores o concéntricas.
Algoritmo EJERCICIO04
	
	Definir X1, X2, Y1, Y2, r1, r2 Como Reales
	
	Escribir "Ingrese X del centro de la circunferencia 1"
	Leer X1
	
	Escribir "Ingrese Y del centro de la circunferencia 1"
	Leer Y1
	
	Escribir "Radio de la circunferencia 1"
	Leer r1
	
	Escribir "Ingrese X del centro de la circunferencia 2"
	Leer X2
	
	Escribir "Ingrese Y del centro de la circunferencia 2"
	Leer Y2
	
	Escribir "Radio de la circunferencia 2"
	Leer r2
	
	Definir distanciaCentros Como Real
	distanciaCentros = RC((X1-X2)^2 + (Y1-Y2)^2)
	
	Si distanciaCentros > (r1+r2)
		Escribir "Son circulos Exteriores"
	SiNo
		Si distanciaCentros = (r1+r2)
			Escribir "Circulos tangentes exteriores"
		SiNo
			Si abs(r1-r2) < distanciaCentros Y distanciaCentros < (r1+r2)
				Escribir "Circulos secantes"
			SiNo
				Si distanciaCentros = abs(r1-r2)
					Escribir "Tangentes interiores"
				SiNo
					Si X1 = X2 Y Y1 = Y2
						Escribir "Circunferencias concentricas"
					FinSi
					
				FinSi
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo
