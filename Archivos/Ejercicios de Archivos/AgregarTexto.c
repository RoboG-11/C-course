//Agregar texto a un archivo txt

#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar

FILE *fd; //Apuntador a archivo

int main(){ //Funcion principal
	
	//Declaracion de variables
	int c;
	char direccion[] = "C:\\Users\\river\\OneDrive\\Documents\\Curso de C\\Ejercicios de Archivos\\texto.txt";
	
	//El apuntador al archivo lo igualamos a fopenn
	fd = fopen(direccion, "at"); //at = add text - agregar texto
	
	if(fd == NULL){ //Condicion de fallo
		printf("Error al tratar de localizar el archivo");
		return 1;
	}
	
	while((c = getchar()) != EOF){ //mientras c sea diferente al EOF para escribir
		fputc(c, fd);
	}
	 
	fclose(fd); //Cerramos el archivo pase lo que pase
	
	return 0; //Se temrina el programa 
	
}
