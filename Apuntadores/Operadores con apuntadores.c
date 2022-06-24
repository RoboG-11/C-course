/*
Operadores con apuntadores
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int w = 10, x = 20, y = 30, z = 40, r1, r2, r3; //Declaracion e inicializacion de variables
	int *p1, *p2, *p3, *p4; //Declaracion de apuntadores
	
	p1 = &w; //Asignacion del valor de 'w' en el apuntador p1
	p2 = &x; //Asignacion del valor de 'x' en el apuntador p2
	p3 = &y; //Asignacion del valor de 'y' en el apuntador p3
	p4 = p1; //Asigancion de valor del apuntador p4 y p1
	r1 = *p1 + *p2; // Operacion entre el contenido de los apuntadores 
	r2 = *p3 * *p4; // Operacion entre el contenido de los apuntadores 
	r3 = *p2 + *p3; // Operacion entre el contenido de los apuntadores 
	
	printf("Los resultados son: %d, %d, %d", r1, r2, r3); //Impresion de los resultados
	printf("\nGracias por usar el programa");
	
	return 0; //Se termina el programa
	
}
