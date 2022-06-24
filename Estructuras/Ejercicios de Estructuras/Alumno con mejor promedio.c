/*
Alumno con mejor promedio

Pedir los datos para N alumnos y calcular cual de todos tiene el mejor promedio e
imprimir sus datos
*/
#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar

struct promedio{ //Declaracion de una estructura
	float nota1; //Declaracion de una variable
	float nota2; //Declaracion de una variable
	float nota3; //Declaracion de una variable
};

struct alumno{ //Declaracion de una estructura
	char nombre[20]; //Declaracion de un array
	char sexo[20]; //Declaracion de un array
	int edad; //Declaracion de una variable
	struct promedio prom; //Struct anidada
}alumnos[100]; //Array con estruturas

int main(){ //Funcion principal
	
	int n, i, pmay; //Declaracion de variables
	float promedio[100], mayor = 0.0; //Declaracion de array y variable
	
	printf("Ingrese el total de alumnos "); //Solicitud de datos
	scanf("%i", &n); //Se guarda en la direccion de memoria de la variable
	
	for(i = 0; i < n; i++){ //Ciclo que se repite las veces indicadas
		fflush(stdin); //Limpia el buffer de entrada
		printf("%i. Ingrese su nombre: ", i+1); //Solicitud de datos
		scanf(" %[^\n]", &alumnos[i].nombre); //Guardado de lo ingresado en la estructura indicada
		printf("%i. Ingrese su sexo: ", i+1); //Solicitud de datos
		scanf(" %[^\n]", &alumnos[i].sexo); //Guardado de lo ingresado en la estructura indicada
		printf("%i. Ingrese su edad: ", i+1); //Solicitud de datos
		scanf("%i", &alumnos[i].edad); //Guardado de lo ingresado en la estructura indicada
		printf("%i. Ingrese su primer nota: ", i+1); //Solicitud de datos
		scanf("%f", &alumnos[i].prom.nota1); //Guardado de lo ingresado en la estructura indicada
		printf("%i. Ingrese su segunda nota: ", i+1); //Solicitud de datos
		scanf("%f", &alumnos[i].prom.nota2); //Guardado de lo ingresado en la estructura indicada
		printf("%i. Ingrese su tercer nota: ", i+1); //Solicitud de datos
		scanf("%f", &alumnos[i].prom.nota3); //Guardado de lo ingresado en la estructura indicada
		printf("\n"); //Salto de linea
		
		promedio[i] = (alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3; //Calculo del promedio
		
		if(promedio[i] > mayor){ //Condicion
			mayor = promedio[i]; //Asigancion de valor
			pmay = i; //Asigancion de valor
		}
	}
	
	printf("\nEl alumno con mejor calificacion es..."); //Formato
	printf("\nNombre: %s", alumnos[pmay].nombre); //Impresion del array indicado
	printf("\nSexo: %s", alumnos[pmay].sexo); //Impresion del array indicado
	printf("\nEdad: %i", alumnos[pmay].edad); //Impresion del array indicado
	printf("\nPromedio: %.1f", promedio[pmay]); //Impresion del array indicado
	
	return 0; //Se termina el programa
	
}
