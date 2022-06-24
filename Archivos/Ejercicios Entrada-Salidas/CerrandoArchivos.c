//Abrir dos archivos de texto .txt, despues cerrar cada uno de ellos con fclose()

#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar

FILE *fd1, *fd2; //Apuntador a los archivos

int main(){

    //Se abren los dos archivos
    fd1 = fopen("C:\\Users\\river\\OneDrive\\Documents\\Curso de C\\Archivos\\prueba.txt", "a+");
    fd2 = fopen("C:\\Users\\river\\OneDrive\\Documents\\Curso de C\\Archivos\\Ejercicios de Archivos\\emails.txt", "a+");

    if(fd1 == NULL || fd2 == NULL){ //Si los archivos no existen
        printf("No se han podido comprobar los archivos");
    }else{ //De lo contrario
        printf("Se ha podido comprobar los archivos");
    }

    //Cerrando los archivos
    fclose(fd1); 
    fclose(fd2); 

    return 0; //Se termina el programa
}