/*
strrchr (Cadena, Caracter) corte
Regresa el restante de la cadena a partir de la primera aparicion del caracter
indicado
*/
#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria string, con funciones de caracteres

int main(){ //Funcion principal
	
	char abecedario[] = "abcdefghijklmnopqrtsuvwxyz"; //Declaracion de un arreglo
	char corte; //Declaracion de variable
	
	printf("Lera donde se cortara el abecedario: "); //Solicitud de ingreso 
	scanf("%c", &corte); //Escanea y guarda lo ingresado
	
	printf("\nLa nueva caneda es: "); //Impresion del resultado
	printf("%s", strrchr(abecedario, corte)); //Impresion del resultado con la funcion de corte
	
	return 0; //Se termina el programa
	
}
