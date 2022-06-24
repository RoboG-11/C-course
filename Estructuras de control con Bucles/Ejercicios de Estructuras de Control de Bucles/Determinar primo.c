/*
Determinar primo
Determinar si un numero es primo o no
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int i, num, cont=0; //Declaracion e inicializacion de variables
	
	printf("Ingrese un numero: "); //Ingreso de datos
	scanf("%i", &num); //Escaneo y guardado de numeros
	
	for(i = 1; i <= num; i++){ //Ciclo for
		if(num%i == 0){ //Condicion de ser numero primo
			cont++; //Guardar la cantidad de numeros divisibles
		}
	}
	
	if(cont > 2){ //Condicion 
		printf("\nEl numero NO es primo"); //Impresion de resultados
	}else{ //Lo contrario de la condicion
		printf("\nEl numero ES primo"); //Impresion de lo contrario
	}
	
	return 0; //Se termina el programa
		
}
