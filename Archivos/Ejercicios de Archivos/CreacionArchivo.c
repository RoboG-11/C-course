//Hacer un programa en C que cree un archivo de texto(.txt)

#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar

FILE *fd; //Apuntador a archivo

int main(){
	
	//Declaracion de variables
	char direccion[] = "C:\\Users\\river\\OneDrive\\Documents\\Curso de C\\Ejercicios de Archivos\\Brian.txt";
	
	//El apuntador al archivo lo igualamos a fopenn
	fd = fopen(direccion, "w"); //w = escribe(write), sobrescribe el contenido. Si el archivo no existe, lo crea
	
	if(fd == NULL){//Condicion de fallo
		printf("No se ha encontrado el lugar para crear el archivo");
	}else{ //De lo contrario imprime la direccion de ubicacion
		printf("Archivo se ha encontrao");
		printf("\nUbicacion: %s", direccion);
	}
	
	fclose(fd); //Cerramos el archivo pase lo que pase
	
	return 0; //Se termina el programa
	
}
