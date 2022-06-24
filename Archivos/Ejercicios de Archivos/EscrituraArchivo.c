//Crear un archivo de texto (.txt) con el nombre de "hola mundo" en la carpeta
//que elijas, y dentro del archivo copiar "Hola y bienvenidos al lenguaje de
//Programacion C"

#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar

FILE *fd; //Apuntador a archivo

int main(){
	
	//Declaracion de variables
	int c;
	char direccion[] = "C:\\Users\\river\\OneDrive\\Documents\\Curso de C\\Ejercicios de Archivos\\CrearArchivo.txt";
	
	//El apuntador al archivo lo igualamos a fopenn
	fd = fopen(direccion, "at"); //at = add text - agregar texto
	
	if(fd == NULL){//Condicion de fallo
		printf("No se ha encontrado el lugar para crear el archivo");
	}
	
	while((c = getchar()) != EOF){ //mientras c sea diferente al EOF para escribir
		fputc(c, fd); //Poner en el archivo
	}
	
	fclose(fd); //Cerramos el archivo pase lo que pase
	
	return 0; //Se termina el programa
	
}
