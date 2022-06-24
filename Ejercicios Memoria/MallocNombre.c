//Utilizar malloc para reservar memoria para un nombre(string)

#include<stdio.h> //Biblioteca de entrada y salida
#include<string.h> //Biblioteca con funciones de strings
#include<stdlib.h> //Biblioteca estandar

int main(){ //Función principal

    //Declaración de variables
    char nombre[20], *p_nombre;
    int longitud;

    strcpy(nombre, "Alejandro"); //Copiar el string a la variable

    longitud = strlen(nombre); //Se calcula la longitud del array
    p_nombre = malloc((longitud + 1)*sizeof(char)); //Se reverva la memoria dinamica

    strcpy(p_nombre, nombre); //Se copia el nombre al area de memoria de p_nombre

    printf("Nombre: %s", p_nombre); //Se imprime el contenido de la variable

    free(p_nombre); //Se libera la memoria dinamica

    return 0; //Se termina el programa
}