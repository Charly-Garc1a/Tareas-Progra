Algoritmo RelojDigital
	Definir h,m,s,f Como Entero;
	Escribir 'La hora a terminar el reloj: '; 
	Leer f;
	Para h<-1 Hasta f Hacer
		Para m<-1 Hasta 59 Hacer
			Para s<-1 Hasta 59 Hacer
				Escribir h,":",m,":",s;
			Fin Para
		Fin Para
	Fin Para
FinAlgoritmo
