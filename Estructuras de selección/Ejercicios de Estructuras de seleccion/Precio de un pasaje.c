/*
Precio de un pasaje
Seleccionar un tipo de vehiculo e indicar el precio a pagar
1- turismo = 500
2- autobus = 3000
3- motocicleta = 300
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int tipo_vehiculo, precio; //Declaracion de variables
	
	printf("1. Turismo"); //Impresion
	printf("\n2. Autobus"); //Impresion
	printf("\n3. Motocicleta"); //Impresion
	printf("\n\nIngrese el numero del vehiculo: "); //Solicitud de datos
	scanf("%i", &tipo_vehiculo); //Escanea y guarda los datos
	
	printf("\n"); //Salto de linea
	
	switch(tipo_vehiculo){ //Opciones
		case 1: precio = 500; //Inicializacion de una variable
		printf("El precio del turismo es de: $%i", precio); //Impresion del resultado
		break; //Se sale de la opcion
		case 2: precio = 3000; //Inicializacion de una variable
		printf("El precio del autobus es de: $%i", precio); //Impresion del resultado
		break; //Se sale de la opcion
		case 3: precio = 300; //Inicializacion de una variable
		printf("El precio de la motocicleta es de: &%i", precio); //Impresion del resultado
		default :
		printf("Opcion no valida"); //Impresion del resultado
		break; //Se sale de la opcion
	}
	
	return 0; //Se termina el programa
}
