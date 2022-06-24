/*
Potencia con apuntadores

Escribe un programa en el cual, se solicite al usuario 2 valores (almacenados
en 2 variables) y mediante una funcion que no devuelva ningum valor que
utilice por referencia, se calcule lo siguiente:
a) El resultado de elevar el primer numero a la potencia del segundo
b) La division del valor obtenido en el inciso a y el primer valor ingresado
Ejemplo: si el usuario ingresa 8 y 4
a) 8 ^ 4 = 4096
b) 4096 / 8 = 512

El resultado de a y b se debe de almacenae en las mismas variables donde
se almacenaron los datos ingresados por el usuario
*/
#include<stdio.h> //Libreria de entrada y salida
#include<math.h> //Libreria con funciones matematcas

void potencia(int *valor1, int *valor2); //Declaracion de funcion

int main(){ //Funcion principal
	
	int valor1, valor2; //Declaracion de variables
	
	printf("Ingresa el primer valor: "); //Solicitud de datos
	scanf("%i", &valor1); //Se guarda lo ingresado en la variable
	printf("Ingresa el segundo valor: "); //Solicitud de datos
	scanf("%i", &valor2); //Se guarda lo ingresado en la variable
	
	potencia(&valor1, &valor2); //Se llama a la funcion
	
	printf("Los valores son %i y %i", valor1, valor2); //Impresion de resultados
	
	return 0; //Se termina el programa
	
}

void potencia(int *valor1, int *valor2){ //Funcion que eleva al cuadrado y divide
	
	int valorCuadrado; //Declaracion de variable
	
	valorCuadrado = pow(*valor1, *valor2); //Asignacion del valor de elevar al cuadrado
	*valor2 = valorCuadrado / *valor1; //Asignacion del valor al dividirlo
	*valor1 = valorCuadrado; //Asignacion del resultado al elevar al cuadrado
	
}
