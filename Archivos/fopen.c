/*
fopen
Utilizar funcion fopen(), para determinar si existe un archivo de texto
(.txt) o no.

fopen(nombreArchivo, modo);
	nombreArchivo = cadena...Contiene el identificador externo del archivo
	modo = cadena         ...Contiene el modo en que va a ser tratado
//						     el archivo
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	FILE *fd; //Declaracion del apuntador en el archivo
	
	char direccion[30]; //Array con el nombre del archivo
	
	fd = fopen(direccion, "r"); //Puntero con la funcion de abrir y leer
	
	if(fd == NULL){ //Condicion
		printf("El archivo no existe"); //Impresion de la condicion
	}else{ //Lo contrario de la condicion
		printf("Se encontro el archivo"); //Impresion de la condicion
		printf("\nSu ubicacion es: %s", direccion); //Impresion de la condicion
	}
	
	fclose(fd);
	
	return 0; //Se termina el programa
	
}
