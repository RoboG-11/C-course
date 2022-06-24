/*
Pasar de año
Ver si un alumno va a pasar de año o no. Un alumno solo tiene derecho de reprobar 3 materias
para poder pasar de año, si reprueba 4 de ellas, no puede pasar de año y recursa.
*/
#include<stdio.h> //Biblioteca estandar

int main(){ //Funcion principal
	
	int materiasR; //Declaracion de variables
	
	printf("Ingresa las cantidad de materias reprobadas: "); //Ingreso de datos
	scanf("%i", &materiasR); //Escaneo y guardado de datos
	
	if(materiasR>3){ //Condicion 
		printf("\nEstas reprobado, tienes que repetir anio por deber %i materias", materiasR); //Impresion de la condicion
	}else{ //Lo contrario de la condicion
		printf("\nPasas de anio, pero debes %i materias", materiasR); //Impresion de la condicion
	}
	
	return 0; //Termina el programa
}
