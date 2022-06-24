//Lectura de cadena de caracteres

#include<stdio.h> //Libreria de entrada y salida

/*
int main(){ //Función principal
	
	char nombre[20]; //Declaración de un array
	
	printf("Escribe tu nombre: "); //Impresión en pantalla
	scanf("%s", &nombre); //Escaneo de lo ingresado
	
	printf("Tu nombre es: %s", nombre); //Impresión de lo guardado en el array
	
	return 0; //Se termina el programa
}*/

/*
int main(){ //Función principal del programa para palabraXpalabra
	
	char palabra[20]; //Declaración de array
	
	do{ //Bucle do while
		scanf("%s", &palabra); //Se escanea lo ingresado
		if(!feof(stdin)){ //Mientras no sea el final se imprime
			printf("\n%s", palabra);
		}
	}while(!feof(stdin)); //Condición del bucle hasta que no se termine
	
	return 0; //Se termina el programa
	
}*/


int main(){ //Función principal
	
	char palabra[20]; //Declaracion de array
	
	printf("Escribe una palabra: "); //Impresión en pantalla
	gets(palabra); //Escaneo especial para string
	
	printf("Palabra ingresada: %s", palabra); //Impresion del array
	
	return 0; //Se termina el programa
	
}
