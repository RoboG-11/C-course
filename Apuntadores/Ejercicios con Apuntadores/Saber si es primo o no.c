/*
Saber si es primo o no
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int num, i, cont=0; //Declaracion de variables
	int *pNum; //Declaracion de puntero
	
	printf("Ingrese un numero: "); //Solicitud de datos
	scanf("%i", &num); //Se guarada lo ingresado
	
	pNum = &num; //Se inicializa el apuntador en la direccion de memoria
	
	for(i = 1; i <= *pNum; i++){ //Ciclo de repeticiones
		if(*pNum%i==0){ //Condicion de los numeros divisibles
			cont++; //Aumenta el valor de la variable
		}
	}
	
	if(cont > 2){ //Condicion si es impar
		printf("\nEl numero: %i NO es primo", *pNum); //Impresion del resultado de la condicion
		printf("\nPosicion: %p", pNum); //Impresion de la direccion de memoria
	}else{ //Lo contrario de la condicion
		printf("\nEl numero: %i SI es primo", *pNum); //Impresion del resultado de la condicion
		printf("\nPosicion: %p", pNum); //Impresion de la direccion de memoria
	}
	
	return 0; //Se termina el programa
	
}
