/*
Par o impar
Determinar si un numero es par o impar
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int num; //Declaracion de variable
	
	printf("Ingresa un numero: "); //Solicitus de datos
	scanf("%i", &num); //Escanea y guarda lo ingresado 
	
	printf("\n"); //Salto de linea
	
	if(num%2 == 0){ //condicion con el modulo = 0
		printf("El numero es par"); //Impresion de la condidicion
	}else{ //Lo contrario de la condicion
		printf("El numero es impar"); //Impresion de la condidicion
	}
	
	return 0; //Termina el programa
}
