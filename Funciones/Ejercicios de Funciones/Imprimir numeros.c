/*
Imprimir numeros
consideremos una funcion que recibe un numero n e imprima los numeros del n al 1.
Con recursividad
*/
#include<stdio.h> //Libreria de entrada y salida

int lista(int i); //Declaracion de la funcion

int main(){ //Funcion principal
	
	int i, num; //Declaracion de variables
	
	printf("Ingrese el numero de terminos: "); //Solicitud de datos
	scanf("%i", &num); //Escaneo y guardado de datos
	
	for(i = num; i > 0; i--){ //Ciclo de repeticiones de la impresion
		printf("\n%i.", lista(i)); //Impresion del resultado llamando a la funcion
	}
	
	return 0; //Se termina el programa
	
}

int lista(int i){ //Instrucciones de la funcion
	
	if(i == 1 || i ==0){ //Condicion de la funcion
		return 1; //Se regresa un uno
	}else{ //Lo contrario de la condicion anterior
		return lista(i - 1) + 1; //Se regresa el valor obtenido de la operacion
	}//							   y se llama de nuevo a la funcion
	
}
