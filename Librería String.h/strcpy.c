/*
strcpy (Destino, Fuente) COPY
Permite copiar una cadena de texto en otra. Debes de considerar que la dimension
del array destino debe de ser igual o mayor que el array de origen y que ademas
sobrescribe el contenido del destino.
*/
#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria string, con funciones de caracteres

int main(){ //Funcion principal
	
	char origen[]="Programacion"; //Declaracion e inicializacion de variable
	
	/*
	Dado de que 'Programacion' tiene 12 caracteres, creamos el 
	array destino de la misma dimension
	*/
	
	char destino[12]; //Declaracion variable
	//Se copia el contenido y se imprime
	
	strcpy(destino, origen); //Funcion de copiar una cadena de caracteres
	printf("%s", destino); //Impresion del resultado
	
	return 0; //Se termina el programa
	
}
