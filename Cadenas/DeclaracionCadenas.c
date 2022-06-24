//CADENAS: Una cadena es un array de caracteres de una dimensión (vector de caracteres)
//que termina con el carácter especial '\0' (cero). El formato para declarar una cadena
//es: char nombre[n]; donde: n >= 1 y representa a la longitud-1 real de la cadena. 
//Un ejemplo de declaración de cadena es: char cadena [5]; 
//cad = ABC; <--> A B C \0

#include<stdio.h> //Libreria de entrada y salida

//Funcion principal
int main(){
	
	//Declaracion de variable
	char cad[] = "ABC";
	
	printf("%c\n", cad[0]); //Impresion del caracter en la posicion indicada
	printf("\n%c", *cad+1); //Impresion del caracter en la posicion indicada (puntero)
	
	return 0; //Se termina el programa
}
