/*
strcat (Destino, Fuente) CONCATENAR
Concatena (agrega) la cadena fuente en el destino. Debes considerar que la 
cadena destino debe tener un tamaño tal que pueda albergar la cadena resultante
*/
#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria string, con funciones de caracteres

int main(){ //Funcion principal
	
	char cadena1[] = "Brian", cadena2[] = "Rivera"; //Inicializacion de variables
	char final[30]; //Declaracion de un arreglo
	
	strcat(final, cadena1); //Agregar la cadena1 a la cadena final
	strcat(final, " "); //Agregar un espacio a la cadena final
	strcat(final, cadena2); //Agregar la cadena2 a la cadena final
	
	printf("%s", final); //Impresion de la cadena final
	
	return 0; //Se termina el programa
	
}
