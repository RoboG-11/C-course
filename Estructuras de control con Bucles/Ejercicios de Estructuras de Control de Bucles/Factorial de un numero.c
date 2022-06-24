/*
Factorial de un numero
Determina el factorial de un numero
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int num, i, fact=1; //Declaracion e inicializacion 
	
	printf("Ingresa un numero: "); //Solicitud de datos
	scanf("%i", &num); //Escanea y guarda lo ingresado
	
	for(i = 1; i <= num; i++){ //Ciclo for
		fact *= i; //Operacion para el factorial
	}
	
	printf("\nEl factorial es: %i", fact); //Impresion del resultado
	
	return 0; //Termina el programa
}
