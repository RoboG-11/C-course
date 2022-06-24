/*
Operaciones con funciones
Hacer un programa que sume, reste, multiplique y divida. Con funciones y un menu
*/
#include<stdio.h> //Libreria de entrada y salida

void menu(); //Declaracion de una funcion
void suma(); //Declaracion de una funcion
void resta(); //Declaracion de una funcion
void multiplicacion(); //Declaracion de una funcion
void division(); //Declaracion de una funcion

int main(){ //Funcion principal
	
	menu(); //Se llama a la funcion
	
	return 0; //Se termina el programa
	
}

void menu(){ //Intrucciones de la funcion del menu
	
	int option; //Declaracion de variables
	do{ //Ciclo do
		printf("1) Sumar\n"); //Impresion del menu
		printf("2) Restar\n"); //Impresion del menu
		printf("3) Multiplicacion\n"); //Impresion del menu
		printf("4) Division\n"); //Impresion del menu
		printf("5) Salir\n"); //Impresion del menu
		printf("Opcion: "); //Impresion del menu
		scanf("%i", &option); //Escaneo y guarda los datos
		
		switch(option){ //Menu de acuerdo a lo ingresado
			case 1: suma(); //Opcion que llama a la funcion
			break; //Termina el bucle con la opcion seleccionada
			case 2: resta(); //Opcion que llama a la funcion
			break; //Termina el bucle con la opcion seleccionada
			case 3: multiplicacion(); //Opcion que llama a la funcion
			break; //Termina el bucle con la opcion seleccionada
			case 4: division(); //Opcion que llama a la funcion
			break; //Termina el bucle con la opcion seleccionada
			case 5: printf("\nGracias por usar el programa."); //Cierra el menu
			break; //Termina el bucle con la opcion seleccionada
			default: printf("\nOpcion no valida"); //Impresion de la opcion
			printf(", selecciona otra por favor\n\n"); //Impresion de la opcion
			break; //Termina el bucle con la opcion seleccionada
		}
		
	}while(option != 5); //Condicion del ciclo do
	
}

void suma(){ //Intrucciones de la funcion de la suma
	
	int num1, num2, resultado=0; //Declaracion de variables
	
	printf("\nEscribe el primer numero: "); //Solicitud de datos
	scanf("%i", &num1); //Escaneo y guardado de datos
	printf("Escribe el segundo numero: "); //Solicitud de datos
	scanf("%i", &num2); //Escaneo y guardado de datos
	
	resultado = num1 + num2; //Operacion de asignacion
	
	printf("La suma es: %i\n", resultado); //Impresion del resultado
	printf("\nQue mas quieres hacer?\n"); //Impresion del bucle
	
}

void resta(){ //Intrucciones de la funcion de la resta
		
	int num1, num2, resultado=0; //Declaracion de variables
	
	printf("\nEscribe el primer numero: "); //Solicitud de datos
	scanf("%i", &num1); //Escaneo y guardado de datos
	printf("Escribe el segundo numero: "); //Solicitud de datos
	scanf("%i", &num2); //Escaneo y guardado de datos
	
	resultado = num1 - num2; //Operacion de asignacion
	
	printf("La resta es: %i\n", resultado); //Impresion del resultado
	printf("\n\nQue mas quieres hacer?\n"); //Impresion del bucle
	
}

void multiplicacion(){ //Intrucciones de la funcion de la multiplicacion
			
	int num1, num2, resultado=0; //Declaracion de variables
	
	printf("\nEscribe el primer numero: "); //Solicitud de datos
	scanf("%i", &num1); //Escaneo y guardado de datos
	printf("Escribe el segundo numero: "); //Solicitud de datos
	scanf("%i", &num2); //Escaneo y guardado de datos
	
	resultado = num1 * num2; //Operacion de asignacion
	
	printf("La multiplicacion es: %i\n", resultado); //Impresion del resultado
	printf("\n\nQue mas quieres hacer?\n"); //Impresion del bucle
	
}

void division(){ //Intrucciones de la funcion de la division
				
	float num1, num2, resultado=0; //Declaracion de variables
	
	printf("\nEscribe el primer numero: "); //Solicitud de datos
	scanf("%i", &num1); //Escaneo y guardado de datos
	printf("Escribe el segundo numero: "); //Solicitud de datos
	scanf("%i", &num2); //Escaneo y guardado de datos
	
	resultado = num1 / num2; //Operacion de asignacion
	
	printf("La division es: %.3f", resultado); //Impresion del resultado
	printf("\n\nQue mas quieres hacer?\n"); //Impresion del bucle
	
}
