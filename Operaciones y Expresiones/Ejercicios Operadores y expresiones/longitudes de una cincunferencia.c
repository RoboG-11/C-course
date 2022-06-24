//Programa que calcule longitudes de una cincunferencia
#include<stdio.h> //Libreria de entrada y salida
#define PI 3.1416 //Macro, define el valor de una variable

int main (){ //Funcion principal
	
	float radio, l; //Declaracion de variables
	
	printf("Ingresa el valor del radio: "); //Ingreso de datos
	scanf("%f", &radio); //Escaneo de datos
	
	l = PI * radio; //Operacion y asignacion 
	
	printf("La longitud de circunferencia es: %.2f", l); //Impresion de resultado
	
	return 0; //Finaliza el programa
}
