/*
Operaciones aritmeticas
Pedirle al usuario que ingrese 2 numeros; sumarlos, restarlos,
multiplicarlos y dividirlos
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	float num1, num2, suma, resta, multiplicacion, division; //Declaracion de variables
	
	printf("Ingresa el primer numero\n"); //Pedir numero
	scanf("%f", &num1); //Escanea y guarda 
	printf("Ingresa el segundo numero\n"); //Pedir numero
	scanf("%f", &num2); //Escanea y guarda
	
	suma = num1 + num2; //Operacion 
	resta = num1 - num2; //Operacion 
	multiplicacion = num1 * num2; //Operacion 
	division = num1 / num2; //Operacion 
	
	printf("La suma de los numeros es: %.2f\n", suma); //Impresion del resultado
	printf("La resta de los numeros es: %.2f\n", resta); //Impresion del resultado
	printf("La multiplicacion de los numeros es: %.2f\n", multiplicacion); //Impresion del resultado
	printf("La division de los numeros es: %.2f\n", division); //Impresion del resultado
	
	return 0; //Termina el programa
}

