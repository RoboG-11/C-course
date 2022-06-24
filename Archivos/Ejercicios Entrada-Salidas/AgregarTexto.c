//Agregar texto a un archivo txt

#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar

FILE *fd; //Apuntador al archivo

int main(){ //Función principal

    //Declaración de variables
    int c;
    char direccion[] = "C:\\Users\\river\\OneDrive\\Documents\\Curso de C\\Archivos\\prueba.txt";

    fd = fopen(direccion, "at"); //Se abre el archivo. at agregar texto (add text)

    if(fd == NULL){//Si no se encuentra el archivo
        printf("Error al tratar de leer el archivo");
        return 1;
    }

    while((c = fgetchar()) != EOF){ //Mientras c sea diferente al final del archivo
        fputc(c, fd); //Se ingresan los carcateres
    }
    
    fclose(fd); //Se cierra el archivo

    return 0; //Se termina el programa
}