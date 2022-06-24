/*
Signo Escorpio
Ingresar el nombre y el signo de cualquier persona, e imprima el nombre solo si
la persona es de signo Escorpio, de caso contrario imprimir que no es signo Escorpio
*/
#include<stdio.h> //Libreria estandar(input output)

int main(){ //Funcion principal
	
	char nombre[20], signo[20]; //Declaracion de arreglos
	
	printf("Ingresa tu nombre: "); //Solicitud de cadena de caracteres
	scanf(" %[^\n]", nombre); //Escaneo y guardadode cadena de caracteres
	printf("Ingresa tu signo: "); //Solicitud de cadena de caracteres
	scanf(" %[^\n]", signo); //Escaneo y guardadode cadena de caracteres
	
	//strcmp->Comparacion de strings (cadena de caracteres)
	if(strcmp(signo, "Escorpio") == 0){ //Comparacion del signo ingresado con 'Escorpio'
		printf("\nSu nombre es: %s", nombre); //Impresion de la condicion
	}else{ //De lo contrario a la condicion
		printf("\nNo eres signo Escorpio"); //Impresion de la condicion
	}

	return 0; //Termina el programa
}
