/*
Entero a binario con recursividad
*/
#include<stdio.h> //Libreria de entrada y salida

void binario(int num); //Declaracion de una funcion

int main(){ //Funcion principal
	
	int num; //Funcion principal
	
	do{ //Ciclo do
		printf("Ingresa un numero positivo: "); //Solicitud de datos
		scanf("%i", &num); //Escaneo y guardado de lo ingresado
	} while(num < 0); //Condicion de solo numeros positivos
	
	printf("\n"); //Salto de linea mamalon 
	
	printf("El numero en binario es: "); //Formato
	
	binario(num); //Llamado a la funcion
	
	return 0; //Se termina el programa
	
}

void binario(int num){ //Instrucciones de la funcion

	
	if(num > 1){ //Condicion 
		
	binario(num / 2); //Llamado a la funcion con operacion
	
	}
	
	printf("%i", num%2); //Impresion del modulo del resultado
	
}
