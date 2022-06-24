/*
Par o impar

Comprobar si un numero es par o impar, y señanar la posicion de memoria
donde esta guardando el numero.
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int num, *pNum; //Declaracion de variable y puntero de entero
	
	printf("Ingrese un numero: "); //Ingreso de datos 
	scanf("%i", &num); //Guardado de lo ingresado 
	
	pNum = &num; //Se guarda la posicion de memoria del numero
	
	if(*pNum%2 == 0){ //Condicion de si es par
		printf("\nEl numero %i  es par: ", *pNum); //Impresion de la condicion
		printf("\nPosicion: %p", pNum); //Impresion de la posicion de memoria
	}else{ //Lo contrario de la condicion anterio
		printf("\nEl numero %i  es impar: ", *pNum); //Impresion de la condicion
		printf("\nPosicion: %p", pNum); //Impresion de la posicion de memoria
	}
	
	return 0; //Se termina el programa
		
}
