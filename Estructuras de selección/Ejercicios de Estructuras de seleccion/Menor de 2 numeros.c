/*
Menor de 2 numeros
*/
#include<stdio.h> //Libreria estandar

int main(){ //Funcion principal
	
	float num1, num2; //Declaracion de variables
	
	printf("Ingresa el primer numero: "); //Ingreso de datos
	scanf("%f", &num1); //Escaneo y guardado de datos
	printf("Ingresa el primer segundo: "); //Ingreso de datos
	scanf("%f", &num2); //Escaneo y guardado de datos
	
	if(num1>num2){ //Condicion
		printf("\nEl numero menor es: %.2f", num2); //Impresion de la condicion
	}else{ //Lo contrario de la condicion
		printf("\nEl numero menor es: %.2f", num1); //Impresion de la condicion
	}
			
	return 0; //Finaliza el programa
}
