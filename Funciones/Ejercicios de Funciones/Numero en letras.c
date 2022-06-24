/*
Numero en letras
Hacer un programa que pida por pantalla un numero del 1 al 10 y mediante un 
procedimiento, muestre por pantalla el numero escrito en letras
*/
#include<stdio.h> //Libreria de entrada y salida

void letras(int num1); //Declaracion de funcion

int main(){ //Funcion principal
	
	int num1; //Declaracion de variables
	
	printf("Ingresa un numero: "); //Solicitud de datos
	scanf("%i", &num1); //Escaneo y guardado de lo ingresado
	
	while(num1 <1 || num1 > 10){ //Bocle para que se ingresen numeros ente el 1 y 10
		printf("Los numeros ingresados no son validos\n"); //Formato
	printf("Ingresa un numero: "); //Solicitud de datos
	scanf("%i", &num1); //Escaneo y guardado de lo ingresado	
	}
	
	printf("\n"); //Salto de linea mamalon
	
	letras(num1); //Llamado de la funcion
	
	return 0; //Se termina el programa
	
}

void letras(int num1){ //Instrucciones de la funcion 
	switch(num1){ //De acuero a lo ingresado, se hace el case correspondiente
		case 1: printf("Uno"); //Opcion 1
		break; //Termina el bucle con la opcion seleccionada
		case 2: printf("Dos"); //Opcion 2
		break; //Termina el bucle con la opcion seleccionada
		case 3: printf("Tres"); //Opcion 3
		break; //Termina el bucle con la opcion seleccionada
		case 4: printf("Cuatro"); //Opcion 4
		break; //Termina el bucle con la opcion seleccionada
		case 5: printf("Cinco"); //Opcion 5
		break; //Termina el bucle con la opcion seleccionada
		case 6: printf("Seis"); //Opcion 6
		break; //Termina el bucle con la opcion seleccionada
		case 7: printf("Siete"); //Opcion 7
		break; //Termina el bucle con la opcion seleccionada
		case 8: printf("Ocho"); //Opcion 8
		break; //Termina el bucle con la opcion seleccionada
		case 9: printf("Nueve"); //Opcion 9
		break; //Termina el bucle con la opcion seleccionada
		case 10: printf("Diez"); //Opcion 10
		break; //Termina el bucle con la opcion seleccionada
	}
}
