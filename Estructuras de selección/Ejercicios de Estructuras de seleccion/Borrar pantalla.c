/*
Borrar pantalla
Hacer un programa que borre la pantalla al pulsar 1
*/
#include<stdio.h> //Libreria estandar de entrada y salida
#include<stdlib.h> //Libreria standar library

int main(){ //Funcion principal
	
	int letra; //Declaracion de variable
	
	printf("PROGRAMA QUE BORRA LA PANTALLA AL PRESIONAR 1"); //Impresion
	printf("\n---------------------------------------------\n"); //Impresion
	printf("Ingresa el numero 1 para limpiar pantalla: "); //Impresion
	scanf("%i", &letra); //Escanea y guarda lo ingresado
	
	if(letra == 1){ //Condicion
		system("cls"); //Limpia la pantalla (Libreria stdlib)
		printf("Ha funcionado el borrador de pantalla"); //Impresion del resultado
	}else{ //Lo contrario de la condicion
		printf("\nTecla equivocada, tienes que presionar 1: ");  //Impresion
		scanf("%i", &letra); //Escanea y guarda lo ingresado
		if(letra == 1){ //Condicion
			system("cls"); //Limpia la pantalla (Libreria stdlib)
			printf("Ha funcionado el borrador de pantalla"); //Impresion del resultado
		}
	}
	
	return 0; //Se termina el programa
}



