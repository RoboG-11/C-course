/*
Problema de salario por hora 
Dadas las horas trabajadas de una persona y el valor por hora. Calcularlo e
imprimirlo
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int salario, horas, salarioXhora; //Declaracion de variables
	
	printf("Ingresa las horas trabajadas: "); //Solicitud de datos
	scanf("%i", &horas); //Escanea y guarda el dato
	printf("Ingrese el salario por hora: "); //Solicitud de datos
	scanf("%i", &salarioXhora); //Escanea y guarda el dato
	
	salario = horas * salarioXhora; //Operacion de asignacion
	
	printf("\nEl salario total es: %i", salario); //Impresion del resultado
	
	return 0; //Termina el programa
}
