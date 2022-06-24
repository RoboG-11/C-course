/*
Mejor promedio

Hacer una estructura llamada alumno, en la cual se tendran los siguientes miembros:
Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar de los 3
tiene el mejor promedio y posteriormere imprimir los datos del alumno.
*/

#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar

struct alumno{ //Declaracion de estructura
	char nombre[20]; //Declaracion de un array
	int edad; //Declaracion de una variable
	float promedio; //Declaracion de una variable
}alumnos[3]; //Array con estruturas

int main(){ //Funcion principal
	
	int i, pos; //Declaracion de variables
	float mejorNota = 0.0; //Declaracion e inicializacion de variables
	
	for(i = 0; i < 3; i++){ //Ciclo que guarda los datos de los alumnos
		fflush(stdin); //Limpia el buffer de entrada
		printf("%i. Ingresa su nombre: ", i+1); //Solicitud de datos
		scanf(" %[^\n]", &alumnos[i].nombre); //Escanea y guarda lo ingresado en la estructura
		printf("%i. Ingrese su edad: ", i+1); //Solicitud de datos
		scanf("%i", &alumnos[i].edad); //Escanea y guarda lo ingresado en la estructura
		printf("%i. Ingrese su promedio: ", i+1); //Solicitud de datos
		scanf("%f", &alumnos[i].promedio); //Escanea y guarda lo ingresado en la estructura
		printf("\n"); //Salto de linea
	}
	
	for(i = 0; i < 3; i++){ //Ciclop que compara la calificaciones de los alumnos
		if(alumnos[i].promedio > mejorNota){ //Condicion para entrar al ciclo
			mejorNota = alumnos[i].promedio; //Asignacion de valor
			pos = i; //Asignacion de valor
		}
	}
	
	printf("\nEl alumno con mejor nota es: "); //Formato
	printf("\nNombre: %s", alumnos[pos].nombre); //Imprime el resultado de la estructura
	printf("\nEdad: %i", alumnos[pos].edad); //Imprime el resultado de la estructura
	printf("\nPromedio: %.1f", alumnos[pos].promedio); //Imprime el resultado de la estructura
	
	return 0; //Se termina el programa
	
}
