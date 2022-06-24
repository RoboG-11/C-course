/*
Programa Menu
Hacer un menu con las siguentes opciones:
1. Cubo de un numero
2. Numero par o impar
3. Salir
*/
#include<stdio.h> //Libreria de entrada y salida
#include<math.h> //Libreria con funciones matematicas

int main(){ //Funcion principal
	
	int num, n1, n2, option, cubo; //Declaracion de variables
	
	printf("\tMENU"); //Impresion
	printf("\n1. Cubo de un numero"); //Impresion
	printf("\n2. Numero par o impar"); //Impresion
	printf("\n3. Salir"); //Impresion
	printf("\n\nOpcion: "); //Ingreso de datos
	scanf("%i", &option); //Escanea y guarda los datos
	
	switch(option){ //Inicia el switch
		case 1: //Opcion 1
		printf("\nIngrese un numero: "); //Solicitud de datos
		scanf("%i", &num); //Escanea y guarda los datos
		cubo = pow(num, 3); //Operacion y asignacion
		printf("\nEl cubo de numero es: %i", cubo); //Imprime el resultado
		break; //Cierra la opcion
		case 2: //Opcion 2
		printf("\nIngrese un numero: "); //Solicitud de datos
		scanf("%i", &num); //Escanea y guarda los datos
		if(num % 2 == 0){ //Condicion
			printf("\nEl numero es par"); //Imprime el resultado
		}else{ //Lo contrario de la condicion
			printf("\nEl numero es impar"); //Imprime el resultado
		}
		break; //Cierra la opcion
		case 3: //Opcion 3
		break; //Cierra la opcion
		default: //Opcion 4
		printf("\nOpcion no valida"); //Imprime el resultado
	}
	
	return 0; //Se termina el programa
}
