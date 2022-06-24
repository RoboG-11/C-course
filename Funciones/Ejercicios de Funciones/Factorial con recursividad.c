/*
Factorial con recursividad
*/
#include<stdio.h> //Libreria de entrada y salida

int factorial(int num); //declaracion de la funcion

int main(){ //Funcion principal
	
	int num; //Declaracion de variable
	
	printf("El factorial de: "); //Solicitud de datos
	scanf("%i", &num); //Escaneo y guardado de lo ingresado
	
	printf("\nEs: %i", factorial(num)); //Impresion del resultado llamando a la funcion
	
	return 0; //Se termina el programa
	
}

int factorial(int num){ //Instrucciones de la funcion
	
	int resultado; //Declaracion de la variable
	
	if(num < 2){ //Condicion 
		return 1; //Se termina la condicion y se regresa 1 
	}else{ //Lo contrario de la condicion
		resultado = factorial(num - 1) * num; //Operacion de asignacion 
	}//											llamando a la funcion
	
	return resultado; //Se regresa el resultado obtenido
	
}
