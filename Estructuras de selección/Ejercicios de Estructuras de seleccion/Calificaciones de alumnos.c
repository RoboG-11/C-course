/*
Calificaciones de alumnos
9-10: Exelente
8-9: Muy bien
7-8: Bien
6-7: Lograste pasar
0-5: Reprobaste
*/
#include<stdio.h> //Libreria estandar

int main(){ //Funcion principal
	
	int calif; //Declaracion de variables
	
	printf("Ingresa tu calificacion: "); //Ingreso de datos
	scanf("%i", &calif); //Escaneo y guardado de datos
	
	switch(calif){ //Se abren las opciones
		case 1: printf("Reprobaste"); break; //Opcion 1
		case 2: printf("Reprobaste"); break; //Opcion 2
		case 3: printf("Reprobaste"); break; //Opcion 3
		case 4: printf("Reprobaste"); break; //Opcion 4
		case 5: printf("Reprobaste"); break; //Opcion 5
		case 6: printf("Lograste pasar"); break; //Opcion 6
		case 7: printf("Lograste pasar"); break; //Opcion 7
		case 8: printf("Bien"); break; //Opcion 8
		case 9: printf("Muy bien"); break; //Opcion 9
		case 10: printf("Exelente"); break; //Opcion 10
		default:  printf("Opcion invalida"); break; //Opcion 11
	}
	
	return 0; //Termina el programa
}
