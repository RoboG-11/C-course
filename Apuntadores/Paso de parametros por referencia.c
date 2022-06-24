/*
Paso de parametros por referencia
En este tipo de funciones, el valor de la variable sí se modifica, ya que se pasa como
parametro la direccion de memoria de esta, usando el operador '&' y en la funcion, el
argumento se recibe como el valor que alberga esa direccion de memoria usando el
operador '*'
*/
#include<stdio.h> //Libreria de entrada y salida

void agregar(int *a); //Declaracion de la funcion

int main(){ //Funcion principal
	
	int num; //Declaracion de variable
	
	printf("Ingresa un numero: "); //Solicitud de datos
	scanf("%d", &num); //Se guarda lo ingresado en la direccion de memoria
	
	printf("\nValor antes de la funcion: %d", num); //Impresion de la variable
	agregar(&num); //Se llama la funcion con paso por referencia 
	printf("\nValor despues de la funcion: %d", num); //Impresion de la variable
	
	return 0; //Se termina el programa
	
}

void agregar(int *a){ //Funcion de paso por refrencia
	*a += 10; //a = a + 10; 
}
