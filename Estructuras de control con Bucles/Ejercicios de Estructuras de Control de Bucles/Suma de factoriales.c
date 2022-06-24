/*
Suma de factoriales
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principak
	
	int factorial = 1, suma = 0, i, num; //Declaracion e inicializacion de variables
	
	printf("Ingrese la cantidad de factoriales a sumar: "); //Ingreso de datos
	scanf("%i", &num); //Escaneo y guardado de datos
	
	for(i = 1; i <= num; i++){ //Ciclo for
		factorial = factorial * i; //Operacion de aignacion
		suma = suma + factorial; //Operacion de aignacion
	}
	
	printf("La suma es: %i", suma); //Impresion del resultado
	
	return 0; //Se termina el programa
	
}
