/*
Arreglos 2.0
TipoDeDato nombreDelArray[tamanio] = {valor1, valor2, valor3, ..., valorn};
Los incdices inician en el 0 hasta n-1
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int i, array[10]; //Declaracion de variables y arraglo
	
	for(i = 0; i < 10; i++){ //Ciclo for que recorre todo el arreglo
		printf("Ingresa el valor del indice %i: ", i); //Impresion para llenar el array
		scanf("%d", &array[i]); //Escaneo y guardado de lo ingresado en las distintas
	}//							  posiciones del array
	
	printf("\nLos valores ingresados son: "); //Formato
	
	int indice = -1; //Variable preincremento
	while(++indice < 10){ //Ciclo con postincremento
		printf("\n%i", array[indice]); //Imprecion de acuerdo al ciclo
	}
	
	return 0; //Se termina el problema 
	
}
