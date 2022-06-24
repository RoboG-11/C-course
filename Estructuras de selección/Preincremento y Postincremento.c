/*
Preincremento o Postincremento

PREINCREMENTO
int a = 0;
int b = ++a;
a = 1, b = 1;

POSTINCREMENTO
int a = 0;
int b = a++;
a = 1, b = 0
*/
#include<stdio.h> //Libreria estandar

int main(){ //Funcion principal
	
	//PREINCREMENTO
	int a = 0; //Declaracion de variables
	int b = ++a; //Declaracion de variables
	
	printf("El valor de la 'a' es de : %i\n", a); //Impresion 
	printf("El valor de la 'b' es de : %i\n", b); //Impresion 
	
	printf("\n\n"); //Impresion 
	
	//POSTINCREMENTO
	int c = 0; //Declaracion de variables
	int d = c++; //Declaracion de variables
	
	printf("El valor de la 'c' es de: %i\n", c); //Impresion 
	printf("El valor de la 'd' es de: %i\n", d); //Impresion 
	
	return 0; //Se termina el programa
}
