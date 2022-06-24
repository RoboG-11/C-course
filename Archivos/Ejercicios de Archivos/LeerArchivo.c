//Tomar un archivo de texto (.txt) creado y con la funcion
//fgetc() leer todo su contenido
//fgetc(puntero_archivo);

#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar

FILE *fd; //Apuntador a archivo

int main(){
	
	//Declaracion de variables
	int c;
	char direccion[] = "C:\\Users\\river\\OneDrive\\Documents\\Curso de C\\Ejercicios de Archivos\\texto.txt";
	
	//El apuntador al archivo lo igualamos a fopenn
	fd = fopen(direccion, "rt"); //rt = leer texto(read text)
	
	if(fd == NULL){//Condicion de fallo
		printf("No se ha encontrado el lugar para crear el archivo");
		return 1;
	}
	
	while((c = fgetc(fd)) != EOF){
		if(c == '\n'){
			printf("\n"); //Impresion de salto de linea
		}else{
			putchar(c);
		}
	}
	
	fclose(fd); //Cerramos el archivo pase lo que pase
	
	return 0; //Se termina el programa
	
}
