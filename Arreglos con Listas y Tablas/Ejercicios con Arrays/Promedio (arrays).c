/*
Promedio (arrays)
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int array[8]; //Declaracion de un array con 8 espacioa
	int i, total=0; //Declaracion de variables enteras
	float promedio; //Declaracion de variable flotante
	
	for(i = 0; i < 8; i++){ //Ciclo que recorre todo el array
		printf("Dato %i: ", (i+1)); //Solicitud de datos
		scanf("%i", &array[i]); //Escaneo y guardado de lo ingresado
		total = total + array[i]; //Suma el contenido ingresado
	}
	
	promedio = total / 8; //Calculo del promedio
	
	printf("\nEl promedio es: %.2f", promedio); //Impresion del resultado
	
	return 0; //Se termina el programa
	
}
