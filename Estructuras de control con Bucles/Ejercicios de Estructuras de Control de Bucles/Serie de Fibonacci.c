/*
Serie de Fibonacci
Imprimir la serie de Fibonacci
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int num, i, x=0, y=1, z=1; //Inicializacion y declaracion de variables
	
	printf("Escribe el numero de elementos: "); //Solicitud de dato 
	scanf("%i", &num); //Escaneo y guardado de datos
	
	printf("\n"); //Salto de linea
	printf("1, "); //Inicio de la serie de Fibonacci
	
	for(i = 1; i < num; i++){ //Ciclo for
		z = x + y; //Serie de Fibonacci
		x = y; //Serie de Fibonacci
		y = z; //Serie de Fibonacci
		
		printf("%i, ", z); //Impresion de los resultados
	}
	
	return 0; //Se termina el programa
}
