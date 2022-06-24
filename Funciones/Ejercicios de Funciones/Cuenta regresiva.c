/*
Cuenta regresiva
*/
#include<stdio.h> //Libreria de entrada y salida

void cuentaRegresiva(int num); //Declaracion de la funcion

int main(){ //Funcion principal
	
	int num; //Declaracion de variable
	
	printf("Numero a empezar: "); //Solicitud de datos
	scanf("%i", &num); //Se escaneo y se guarda lo ingresado
	
	cuentaRegresiva(num); //Se llama a la funcion
	
	return 0; //Finaliza el programa
	
}

void cuentaRegresiva(int num){ //Instrucciones de la funcion
	
	if(num < 0){ //Condicion 
		return 0; //Se termina la funcion y regresa el 0
	}else{ //Lo contrario de la funcion
		printf("\n%i", num); //Impresion del resultado
		cuentaRegresiva(num - 1); //Llamado a la funcion y se resta una unidad
	}
	
}
