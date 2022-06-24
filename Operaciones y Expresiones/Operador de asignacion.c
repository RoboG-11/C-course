//Operador de asignacion
#include<stdio.h> //Libreria estandar (pide y regresa al usuario)

int main(){ //Funcion peincipal
	
	int a, b, c, d; //Declaracion de varias variables enteras
	a = b = c = d =10; //asignacion a las variables
	
	a += 3; //Operacion de asignacion
	b -= 2; //Operacion de asignacion
	c *= 2; //Operacion de asignacion
	d /= 2; //Operacion de asignacion
	
	printf ("El valor de la variable a es: %i\n", a); //Impresion del resultado
	printf ("El valor de la variable b es: %i\n", b); //Impresion del resultado
	printf ("El valor de la variable c es: %i\n", c); //Impresion del resultado
	printf ("El valor de la variable d es: %i", d); //Impresion del resultado
	
	return 0; //Termina el programa
}
