/*
Binario-Complemento a2

Escribe un programa en el cual se solicite al usuario llenar un arreglo de 10 elementos
(unicamente 0's y 1's). Una vez que el usuario llene el arreglo con el numero binario,
podra seleccionar entre alguna codificacion
a) Binario puro
b) Punto fijo (6 bit entero y 4 bit decimal)
c) Complemento a 2

El programa realizara la conversion y como salida mostrara el resultado en 
representacion decimal
*/
#include <stdio.h> //Libreria de entrada y salida

void binarioPuro(int array[]); //Declaracion de funcion
void puntoFijo(int array[]); //Declaracion de funcion
void complementoA2(int array[]); //Declaracion de funcion

int main(){ //Funcion principal
	
	int array[10]; //Declaracion de arreglo
	int i, option; //Declaracion de variables
	
	printf("Este programa hace conversiones de binario a tres diferentes tipos de ");
	printf("codificacion.\nPrimero llena el arreglo.\nSOLO UTILIZA UNOS Y CEROS\n");
		
	for(i = 0; i < 10; i++){ //Ciclo que recorre todo el array
		printf("Escribe el elemento [%i] del arreglo: ", i); //Llenado del array
		scanf("%i", &array[i]); //Escaneo y guarda lo ingresado
	}
	
	printf("\nOpciones que se pueden realizar.\n"); //Formato
	printf("1. Binario puro\n"); //Formato
	printf("2. Punto fijo (6 bit entero y 4 bit decimal)\n"); //Formato
	printf("3. Complemento a 2\n"); //Formato
	printf("Escoge la opcion deseada: "); //Formato
	scanf("%i", &option); //Escaneo y guarda lo ingresado
	
	switch(option){ //Switch con las distintas opciones
		case 1: //Opcion 1
			printf("\nSeleccionaste binario puro"); //Formato
			binarioPuro(array); //Se llama a la funcion
			break; //Se termina la opcion
		case 2: //Opcion 2
			printf("\nSeleccionaste punto fijo"); //Formato
			puntoFijo(array); //Se llama a la funcion
			break; //Se termina la opcion
		case 3: //Opcion 3
			printf("\nSeleccionaste complemento a 2"); //Formato
			complementoA2(array); //Se llama a la funcion
			break; //Se termina la opcion
		 default: //Opcion default
			printf("\nOpcion no valida"); //Formato
			break; //Se termina la opcion
	}
	
	return 0; //Se termina el programa
	
}

void binarioPuro(int array[]){ //Funcion que convierte a binario
	
	int valor = 512, suma = 0, i; //Declaracion de variables
	
	for(i = 0; i < 10; i++){ //Ciclo que recorre todo el array
		if(array[i] == 1){ //Condicion para ver el valor del bit
			suma = suma + valor; //Operacion de asigancion
		}
		valor = valor/2; //Se divide entre 2
	}
	
	printf("\nEl valor en binario es: %i", suma); //Impresion del resultado
	
}

void puntoFijo(int array[]){ //Funcion que lo convierte en punto fijo
	
	int suma = 0, valor = 32, i; //Declaracion de variables
	float sumaDecimal = 0, valorDecimal = 0.5; //Declaracion de variables
	
	for(i = 0; i < 6; i++){ //Ciclo que recorre todo la parte entera
		if(array[i] == 1){ //Condicion para ver el valor del bit
			suma = suma + valor; //Operacion de asigancion
		}
		valor = valor/2; //Se divide entre 2
	}
	
	for(i = 6; i < 10; i++){//Ciclo que recorre todo la parte decimal
		if(array[1] == 1){ //Condicion para
			sumaDecimal = sumaDecimal + valorDecimal; //Condicion para ver el valor del bit
		}
		valorDecimal = valorDecimal/2;  //Se divide entre 2
	}
	
	printf("\nEl valor del numero en punto fijo es: %.4f", suma+sumaDecimal); //Impresion del resultado
	
}

void complementoA2(int array[]){ //Funcion que lo convierte en complemneto a 2
	
	int posicion, i; //Declaracion de las variables
	
	for(posicion = 0; posicion < 10; posicion++){ //Ciclo que recorre las posiciones
		if(array[posicion] == 1){ //Condicion para saber el valor del bit
			array[posicion] = 0; //Asigancion a la posicion
		}else{ //Lo contrario de la condicion
			array[posicion] = 1; //Asigancion a la posicion
		}
	}
	
	posicion = 9;
	
	while(array[posicion] == 1){ //Condicion para saber el valor del bit
		array[posicion] = 0; //Asignacion a la posicion
		posicion--; //Preincremento en la posicion
		if(array[posicion] == 0){ //Condicion para saber el valor del bit
			array[posicion] = 1; //Asignacion a la posicion
			break; //Se termina la iteracion
		}
	}
	
	if(array[posicion] == 0){ //Condicion para saber el valor del bit
		array[posicion] = 1; //Asignacion a la posicion
	}
	
	for(i = 0; i < 10; i++){ //Ciclo que recorre todo el array
		printf("\n[%i]\n", array[i]); //Impresion del resultado
	}
	
}
