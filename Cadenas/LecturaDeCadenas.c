//Lectura de cadena de caracteres

#include<stdio.h> //Libreria de entrada y salida

/*
int main(){ //Funci�n principal
	
	char nombre[20]; //Declaraci�n de un array
	
	printf("Escribe tu nombre: "); //Impresi�n en pantalla
	scanf("%s", &nombre); //Escaneo de lo ingresado
	
	printf("Tu nombre es: %s", nombre); //Impresi�n de lo guardado en el array
	
	return 0; //Se termina el programa
}*/

/*
int main(){ //Funci�n principal del programa para palabraXpalabra
	
	char palabra[20]; //Declaraci�n de array
	
	do{ //Bucle do while
		scanf("%s", &palabra); //Se escanea lo ingresado
		if(!feof(stdin)){ //Mientras no sea el final se imprime
			printf("\n%s", palabra);
		}
	}while(!feof(stdin)); //Condici�n del bucle hasta que no se termine
	
	return 0; //Se termina el programa
	
}*/


int main(){ //Funci�n principal
	
	char palabra[20]; //Declaracion de array
	
	printf("Escribe una palabra: "); //Impresi�n en pantalla
	gets(palabra); //Escaneo especial para string
	
	printf("Palabra ingresada: %s", palabra); //Impresion del array
	
	return 0; //Se termina el programa
	
}
