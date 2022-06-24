/*
Media aritmetica
*/
#include<stdio.h> //Libreria de entrada y salida

float media(float num1, float num2); //Declaracion de funcion

int main(){ //Funcion principal
	
	float num1, num2; //Declaracion de variables
	
	printf("Ingresa el primer numero: "); //Solicitud de datos
	scanf("%f", &num1); //Escaneo y guardado de datos
	printf("Ingresa el segundo numero: "); //Solicitud de datos
	scanf("%f", &num2); //Escaneo y guardado de datos
	
	printf("\nLa media aritmetica es: %.2f", media(num1, num2)); //Impresion del resultado
//																   llamando a la funcion
	return 0; //Se termina el programa
	
}

float media(float num1, float num2){ //Intrucciones de la funcion
	
	float media_aritmetica = 0; //Declaracion de una variable local
	
	media_aritmetica = (num1 + num2) / 2; //Operacion de asignacion
	
	return media_aritmetica; //Se regresa el resultado obtenido
	
}
