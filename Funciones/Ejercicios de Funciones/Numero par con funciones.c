/*
Numero par con funciones
*/
#include<stdio.h> //Libreria de entrada y salida

int numPar(); //Declaracion de la funcion

int main(){ //Funcion principal
	
	int num, x; //Declaracion de variables
	
	printf("Escribe un numero: "); //Solicitud de entrada
	scanf("%i", &num); //Escaneo y guardado de lo ingresado
	
	x = numPar(num); //Llamado y asignacion de la funcion
	
	if(x==0){ //Condicion if
		printf("\nEl numero es par"); //Impresion de la condicion
	}else{ //Lo contrario de la condicion if
		printf("\nEl numero es impar"); //Impresion de la condicion
	}
	
	return 0; //Se termina el programa
	
}

int numPar(int num){ //Acciones de la funcion
	
	if(num%2 == 0){ //Condicion del modulo entre 2, para saber si es par o no
		return 0; //Returna el valor de 0
	}else{ //Lo contrario de la condicion
		return 1; //Returna el 1
	}	
	return numPar; //Se termina la funcion, y regresa el valor
		
}
