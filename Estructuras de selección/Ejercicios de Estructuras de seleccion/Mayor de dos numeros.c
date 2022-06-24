/*
Mayor de dos numeros
Calcular el mayor de dos numeros ingresados, y visualizarlos en la pantalla
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	float num1, num2; //Declaracion de variebles flotantes
	
	printf("Ingresa el primer numero: "); //Solicitud de datos
	scanf("%f", &num1); //Escanea y guarda los datos
	printf("Ingresa el segundo numero: "); //Solicitud de datos
	scanf("%f", &num2); //Escanea y guarda los datos
	
	if(num1 > num2){ //Condicion 'si'
		printf("\nEl numero mayor es: %.2f", num1); //Impresion de la condicion
	}else{ //Lo contrario de la condicion
		printf("\nEl numero mayor es: %.2f", num2); //Impresion de la condicion
	}
	
	return 0; //Termina el programa
}
