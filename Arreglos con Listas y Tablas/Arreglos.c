/*
Arreglos 

Array Unidimensional, es una secuencia de datos

Arrays enteros
Arrays flotantes
Arrays de caracter
Arrays de string (cadena/conjunto de caracteres)

Los arrays SIEMPRE EMPIEZAN EN CERO NUNCA EN UNO
*/

/*
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int array[5] = {1, 2, 3, 4, 5}; //Declaracion e inicializacion del array
	
	printf("%i", array[0]); //Impresion de contedino y la posicion del array indicada
 	
	return 0; //Se termina el programa
	
}*/

/*
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int i, array[5] = {1, 2, 3 ,4 ,5}; //Declaracion e inicializacion del array
	
	for(i = 0; i < 5; i++){ //Ciclo que recorre todo el array
		printf("%i\n", array[i]); //Impresion del contenido del array y su pocision
	}
	
	return 0; //Se termina el programa
	
}*/

/*
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	float array [5]; //Declaracion del array
	int i; //Declaracion de una variable iterativa
	
	for(i = 0; i < 5; i++){ //Ciclo que recorre el arreglo
		printf("%i) Ingrese un numero: ", i+1); //Impresion en cada posicion del array
		scanf("%f", &array[i]); //Escaneo y guardado
		printf("\n"); //Salto de linea mamalon
	}
	
	printf("Los valores ingresados son: "); //Formato
	
	for(i = 0; i < 5; i++){ //Ciclo que recorre el arreglo
		printf("\n%.2f", array[i]); //Imprime cada posicion del array
	}
	
	return 0; //Se termina el programa
	
}*/

/*
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	int i; //De calaracion de variable
	char array[5] = {'B', 'r', 'i', 'a', 'n'}; //Decalaracion e inicializacion array
	
	for(i = 0; i < 5; i++){ //Ciclo que recorre el arreglo
		printf("%c", array[i]); //Imprime cada posicion del array
	}
	
	return 0; //Se termina el programa
	
}*/

/*
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	char array[20] = "Brian Rivera"; //Decalaracion e inicializacion del array
	
	printf("%s", array); //Imprime cada posicion del array
	
	return 0; //Se termina el programa
	
}*/


#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	char array[20]; //Decalaracion del array
	
	printf("Ingresa tu nombre: "); //Ingreso de datos 
	scanf(" %[^\n]", &array); //Escaeo y guardado en cada posicion en el array
	
	printf("\nTu nombre es: %s", array); //Imprime cada posicion del array
	
	return 0; //Se termina el programa
}
