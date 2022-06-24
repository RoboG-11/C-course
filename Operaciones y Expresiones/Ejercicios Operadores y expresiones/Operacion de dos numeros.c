/*
Pedir dos numeros al usuario, sumarlos, restarlos, multiplicarlos 
y dividirlos
*/
#include<stdio.h> //Libreria estandar

int main(){ //Funcion principal
	
	int num1, num2, suma, resta, multiplicacion, division; //Declaracion de variables
	
	printf("Ingresa el primer numero: "); //Ingreso de valores
	scanf("%i", &num1); //Escaneo de valores
	printf("Ingresa el segundo numero: "); //Ingreso de valores
	scanf("%i", &num2); //Escaneo de valores
	
	suma = num1 + num2; //Operacion y asignacion
	resta = num1 - num2; //Operacion y asignacion
	multiplicacion = num1 * num2; //Operacion y asignacion
	division = num1 / num2; //Operacion y asignacion
	
	printf("La suma de los numeros es: %i\n", suma); //Impresion de resultados
	printf("La resta de los numeros es: %i\n", resta); //Impresion de resultados
	printf("La multiplicacion de los numeros es: %i\n", multiplicacion); //Impresion de resultados
	printf("La division de los numeros es: %i\n", division); //Impresion de resultados
	
	return 0; //Termina el programa
}
