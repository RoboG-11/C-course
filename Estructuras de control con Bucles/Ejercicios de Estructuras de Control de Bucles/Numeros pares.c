/*
Numeros pares
Hacer un programa que imprima la suma de todos los numeros pares que hay desde 1 hasta
n, y diga cuantos numero hay
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int cont=0, suma=0, i, num; //Declaracion e inicializacion de variables
	
	printf("Ingrese la cantidad de elementos: "); //Ingreso de datos
	scanf("%i", &num); //Escaneo y guardado de datos
	
	for(i = 1; i <= num; i++){ //Ciclo for
		if(i%2 == 0){ //Condicion if para entrar al ciclo
			suma = suma + i; //Operacion y asigancion
			cont++; //Iteracion del contador
		}
	}
	
	printf("\nLa suma es: %i", suma); //Impresion del resultado
	printf("\nLa cantidad de numeros es: %i", cont); //Impresion del resultado
	
	return 0; //Se termina el programa
	
}
