/*
 *Reservar espacio en memoria dinamixa para un nombre y luego liberarla utilizando free();
 */

#include<stdlib.h> //Libreria estandar
#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria con funciones para strings

int main(){ //Función principal

    //Declaración de variables
    char nombre[20], *p_nombre;
    int longitud;

    strcpy(nombre, "Brian"); //Se copia la cadena al array
    longitud = strlen(nombre); //Se calcula la longitud de la cadena

    p_nombre = malloc((longitud + 1) *sizeof(char)); //Se reserva la memoria dinamica

    strcpy(p_nombre, nombre); //Se copia el nombre 

    printf("Nombre: %s", p_nombre); //Se imprime el contenido
    free(p_nombre); //Se libera la memoria almacenada

    printf("\nNombre: %s", p_nombre); //Se imprime el contenido luego de liberar la mmemoria
    

    return 0; //Se termina el programa

}