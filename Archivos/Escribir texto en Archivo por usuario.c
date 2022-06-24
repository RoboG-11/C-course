/*
Escribir texto en Archivo por usuario
*/
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal
	
	FILE *archivo = fopen("prueba.txt", "a"); //Apuntador y se iguala a lo que devuelve fopen
	//											El archivo se creara automaticamente 'a'
	printf("Escribe lo que estara en el archivo: "); //Formato
	
	if(archivo==NULL){ //Condicion del archivo no encontrado
		printf("Error al intentar crear/acceder al archivo"); //Impresion de la condicion
	}else{ //Lo contrario de la condicion
		char letra; //Declaracion de variable
		while((letra = getchar()) != '\n'){ //Se copia la cadena de caracteres
			fputc(letra, archivo); //Se manda lo obtenido al archivo
		}
	}
	
	fclose(archivo); //Se cierra el archivo
	
	return 0; //Se termina el programa
	
}
