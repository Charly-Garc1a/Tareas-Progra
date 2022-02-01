Algoritmo CalcularPulsaciones
		Escribir 'Ingrese su edad: '; 
		Leer edad; 
		Escribir 'Ingrese su sexo masculino-femenino (M o F): '; 
		Leer sexo; 
		Si ((sexo='M') | (sexo='m')) Entonces 
			pulsaciones<-(210-edad)/10; 
		Sino 
			pulsaciones<-(220-edad)/10; 
		FinSi 
		Escribir 'Pulsaciones: ',pulsaciones; 
FinProceso 