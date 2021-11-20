Algoritmo Triangulo_asteriscos
	Definir numData Como Entero
	Definir astv,res Como Caracter
	Escribir 'Ingresa el numero final de astersicos y columnas que tendra  tu triangulo: '
	Leer numData
	Para i<-1 Hasta numData Hacer
		astv <- '*'
		res <- res+astv
		Escribir res
	FinPara
FinAlgoritmo
