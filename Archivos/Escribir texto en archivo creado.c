/*
Escribir texto en archivo creado

Un puntero a un archivo, es un puntero a una informacion que define varias
cosas sobre el, incluyendo el nombre, el estado y la posicion actual del
archivo.
En esencia idefinida, un archivo especifico y utiliza la secuencua 
asociada para dirigir el funcionamiento de las funciones de entrada/salida
con buffer.
Un puntero a un archivo es una variable de tipo puntero al tipo FILE que
se define en stdio.h
Un programa necesita utilizar punteros a archivos para leer o escribir en 
los mismos. Para obtener una variable de este tipo se utiliza una
secuencia como esta: FILE *F.
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	FILE *archivo = fopen("prueba.txt", "a"); //Apuntador y se iguala a lo que devuelve fopen
	//											El archivo se creara automaticamente 'a'
	if(archivo == NULL){ //Condicion nula
		printf("Error al intentar crear/acceder al archivo"); //Impresion de la condicion
	}else{ //Lo contrario a la condicion
		char texto[] = "Hola mundo"; //Se define un array
		fprintf(archivo, "texto escrito: %s", texto); //Se manda el array al archivo creado
		printf("Archivo creado con exito"); //Impresion de la condicon
	}
	
	fclose(archivo); //Se cierra el archivo (pase lo que pase)
	
	return 0; //Se termina el programa
	
}
