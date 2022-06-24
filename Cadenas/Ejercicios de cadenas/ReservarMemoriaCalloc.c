/*
 *Reservar memoria con calloc para una cadena de caracteres
 */

#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar
#include<string.h> //Libreria con funciones de strings

int main(){ //Función principal

    char *c, palabra[50]; //Declaración de variables

    printf("Escribe una palabra: "); //Solicitud de dato
    gets(palabra); //Se guarda lo ingresado en la variable

    c = calloc(strlen(palabra) + 1, sizeof(char)); //Se reserva memoria con calloc en c

    strcpy(c, palabra); //Se copia lo que hay en palabra en c

    printf("Palabra: %s", c);

    return 0; //Se termina el programa
}