/*
 *Utilizar la función fopen(), para determinar si existe un archivo de texto (.txt) o no.
 *fopen(nombre de archivo, modo);
 *nombre de archivo = cadena
 *(contiene identificador externo del archivo)
 *modo = cadena
 *(contiene el modo en que va a ser tratado el archivo)
 */

#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar

FILE *fd; //Apuntador al archivo

int main(){ //Función principal

    char direccion[] = "C:\\Users\\river\\OneDrive\\Documents\\Curso de C\\Archivos\\prueba.txt"; //Direccion
    fd = fopen(direccion, "r"); //Se abre el archivo. r leer (read) 

    if(fd == NULL){ //Si el archivo no existe
        printf("El archivo no esxiste");
    }else{ //De lo contrario
        printf("Se encontro el archivo\n");
        printf("Su ubicacion es: %s", direccion);
    }

    fclose(fd); //Cerramos el archivo pase lo que pase

    return 0; //Se termina el programa
}