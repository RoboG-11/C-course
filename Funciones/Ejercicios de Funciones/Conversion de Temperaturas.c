/*
Conversion de Temperaturas
*/
#include<stdio.h> //Libreria de entrada y salida

float kelvin(float celsius); //Declracion de funcion
float fahrenheit(float celsius); //Declracion de funcion
float celsius; //Declaracion de variable global
int option; //Declaracion de variable global

int main(){ //Funcion principal
	
	printf("Este programa conviete grados Celsius a Kelvin y Fahrenheit"); //Impresion
	
	do{ //Ciclo de repeticiones 
		
		printf("\nIngresa el valor de los grados Celsius: "); //Solicitud de datos
		scanf("%f", &celsius); //Escaneo y guardado de datos
		
		printf("\n1. Convertir a Kelvin"); //Impresion
		printf("\n2. Convertir a Fahrenheit"); //Impresion
		printf("\n3. Salir"); //Impresion
		printf("\nQue opcion deseas hacer? "); //Solicitud de datos
		scanf("%i", &option); //Escaneo y guardado de datos
		
		switch(option){ //Switch con las distintas opciones
			case 1: printf("\nEl valor es: %.2f K\n", kelvin(celsius)); //Impresion de resultados 
			break; //Termina con el switch								   y llamado a la funcion
			case 2: printf("\nEl valor es: %.2f F\n", fahrenheit(celsius)); //Impresion de resultados
			break; //Termina con el switch									  y llamado a la funcion
			case 3: printf("\nGracias por usar el programa");//Impresion de salida
			break; //Termina con el switch
			default: printf("\nOpcion no valida, escoge otra por favor\n"); //Impresion de resultados
			break; //Termina con el switch
		}
	}while(option != 3); //La condicion para cerrar el ciclo de repeticiones
	
	return 0; //Se termina el programa
	
}

float kelvin(float celsius){ //Funcion de conversion a Kelvin
	
	float resultado = 0; //Declaracion e inicializacion de variable local
	
	resultado = celsius + 273.15; //Operacion de aignacion con la conversion
	
	return resultado; //Regresa la variable de resultados
	
}

float fahrenheit(float celsius){ //Funcion de conversion a Fahrenheit
	
	float resultado = 0; //Declaracion e inicializacion de variable local
	
	resultado = ((celsius * 9)/5) + 32; //Operacion de aignacion con la conversion
	
	return resultado; //Regresa la variable de resultados
	
}
