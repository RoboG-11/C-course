/*
Arrays pares e impares

Programa que genere 10 numeros randoms, y los clasifique como pares o impares
*/
#include<stdio.h> //Libreria de entrada y salida
#define TAM 10 //Se declara una macro con valor de 10

int main(){ //Funcion principal
	
	int i, num[TAM], pares[TAM], impares[TAM], n; //Declaracion de variables
	
	srand(time(NULL)); //Funcion que genera un numero aleatorio
	
	for(i = 0; i < TAM; i++){ //Ciclo que genera 10 numeros aleatorios
		num[i] = rand()% + (10 + 1); //Generacion de numero aleatorio
	}
	
	printf("PARES\n"); //Formato
	for(i = 0; i < TAM; i++){ //Ciclo que imprime las veces necesarias
		if(num[i]%2==0){ //Condicion de numero par
			printf("%i.\n", num[i]); //Impresion del numero
		}
	}
	
	printf("\nIMPARES"); //Formato
	for(i = 0; i < TAM; i++){ //Ciclo que imprime las veces necesarias
		if(num[i]%2!=0){ //Condicion de numero impar
			printf("\n%i.", num[i]); //Impresion del numero
		}
	}
	
	return 0; //Se termina el programa
	
}
