/*
Numero positivo o negativo
Comprobar si un numero ingresado es positivo o negativo
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int num; //Declaracion de la variable
	
	printf("Ingresa un numero: "); //Solicitud de datos
	scanf("%i", &num); //Escanea y guarda
	
	printf("\n"); //Imprime un salto de linea
	
	if(num > 0){ //Condicion
		printf("El numero es positivo"); //Impresion de la condicion
	}else{ //Lo contrario de la condicion
		printf("El numero es negativo"); //Impresion de la condicion
	}
	
	return 0; //Termina el programa
}

