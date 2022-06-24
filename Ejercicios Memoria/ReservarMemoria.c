//Reservar espacio en memoria dinamica para un nombre, y luego liberar la memoria utilizando free(); 

#include<stdio.h> //Biblioteca de entrada y salida
#include<stdlib.h> //Biblioteca estandar
#include<string.h> //Biblioteca con funciones de strings

int main(){ //Función principal

    //Declaración de variables
    char nombre[20], *p_nombre;
    int longitud;

    strcpy(nombre, "Brian"); //Se copia el array a la variable

    longitud = strlen(nombre); //Se calcula la longitud de la cadena
    p_nombre = malloc((longitud + 1)*sizeof(char)); //Se reserva la memoria de acuerdo al tamaño
    strcpy(p_nombre, nombre); //Se copia el array en la variable con memoria dinamica

    printf("Nombre: %s", p_nombre); //Se imprime el contenido de la memoria dinamica

    free(p_nombre); //Se libera la memoria dinamica

    printf("\n\nNombre: %s", p_nombre); //Se comprueba el contenido de la memoria

    return 0; //Se termina el programa
}