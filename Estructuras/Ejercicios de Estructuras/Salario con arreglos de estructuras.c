/*
Salario con arreglos de estructuras

Realizar un programa en C que lea un arreglo de estructuras. Los datos de N
empleados de la empresa y que imprima los datos del empleado con mayor
y menor salario
*/
#include<stdio.h> //Libreria de entrada y salida

struct empleado{ //Declaracion de estructura
	char nombre[30]; //Declaracion de array
	char sexo[20]; //Declaracion de array
	float salario; //Declaracion de variable
}empleados[100]; //Declaracion de las estructuras

int main(){ //Funcion principal
	
	int n, i, pmay, pmen; //Declaracion de variable
	float mayor=0.0, menor=99999999; //Declaracion de variable
	
	printf("Escribe cuantos emepleados hay en la empresa: "); //Solicitud de datos 
	scanf("%i", &n); //Escaneo y guardado de datos
	
	for(i = 0; i < n; i++){ //Ciclo de repeticion
		fflush(stdin); //Limpiado de buffer
		printf("Escribe el nombre del emplead@ %i: ", i+1); //Solicitud de datos 
		scanf(" %[^\n]", &empleados[i].nombre); //Escaneo y guardado en la estructura
		printf("Escribe el sexo del emplead@ %i: ", i+1); //Solicitud de datos 
		scanf(" %[^\n]", &empleados[i].sexo); //Escaneo y guardado en la estructura
		printf("Escribe su salario del empleado %i: ", i+1); //Solicitud de datos 
		scanf("%f", &empleados[i].salario); //Escaneo y guardado en la estructura
		printf("\n"); //Formato
	}
	
	for(i = 0; i < n; i++){ //Ciclo de repeticion
		if(empleados[i].salario > mayor){ //Condicion
			mayor = empleados[i].salario; //Operacion de asigancion con estructuras
			pmay = i; //Operacion de asigancion
		}
		if(empleados[i].salario < menor){ //Condicion
			menor = empleados[i].salario; //Operacion de asigancion con estructuras
			pmen = i; //Operacion de asigancion
		}
	}
	
	printf("\n\n\nDATOS DEL EMPLEADO CON MEJOR SUELDO"); //Formato
	printf("\nNombre: %s", empleados[pmay].nombre); //Impresion del resultado de la estructura
	printf("\nSexo: %s", empleados[pmay].sexo); //Impresion del resultado de la estructura
	printf("\nSalario: %.2f", empleados[pmay].salario); //Impresion del resultado de la estructura
	
	printf("\n\nDATOS DEL EMPLEADO CON PEOR SUELDO"); //Formato
	printf("\nNombre: %s", empleados[pmen].nombre); //Impresion del resultado de la estructura
	printf("\nSexo: %s", empleados[pmen].sexo); //Impresion del resultado de la estructura
	printf("\nSalario: %.2f", empleados[pmen].salario); //Impresion del resultado de la estructura
	
	return 0; //Se termina el programa
	
}
