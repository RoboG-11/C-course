/*
Invertir un numero
Invertir un numero con recursividad
*/
#include<stdio.h> //Libreria de entrada y salida

void invertir(int num); //Declaracion de la variable

int main(){ //Funcion principal
	
	int num; //Declaracion de variable
	
	do{ //Ciclo
		printf("Ingresa un numero: "); //Solicitud de datos
		scanf("%i", &num); //Escaneo y guardado de lo ingresado
	}while(num < 0); //Condicion del ciclo
	
	printf("\n"); //Salto de linea mamalon
	
	invertir(num); //Llamado a la funcion
	
	return 0; //Se termina el programa
	
}

void invertir(int num){ //Instrucciones de la funcion
	
	printf("%i", num%10); //Impresion del resultado
	if(num > 10){ //Condicion 
	invertir(num/10); //Se llama de nuevo a la funcion
	}
	
}
