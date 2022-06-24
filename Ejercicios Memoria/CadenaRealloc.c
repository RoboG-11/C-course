/*
 *Reservar memoria dinamica para una cadena de caracetres de 10 espacios, luego ocupar realloc para poderl
 *ampliar la memoria dinamica a 30 espacios
 */

#include<stdio.h> //Biblioteca de entrada y salida
#include<stdlib.h> //Biblioteca estandar
#include<string.h> //Biblioteca con funciones de strings

int main(){ //Función principal

    char *p_nombre, *p_nombreCompleto; //Declaración de punteros tipo char
    
    p_nombre = malloc(10*sizeof(char)); //Se reserva memoria dinamica de 10 char

    strcpy(p_nombre, "Brian"); //Se copia el string a la variable
    printf("Nombre: %s", p_nombre); //Se imprime el contenido de la variable

    p_nombreCompleto = realloc(p_nombre, 30*sizeof(char)); //Se expande el espacio de 10 a 30 con realloc
    strcat(p_nombreCompleto, " Curso de C"); //Se concatena las dos cadenas de texto

    printf("\nNombre: %s", p_nombreCompleto); //Se imprime el contenido actualizado

    free(p_nombreCompleto); //Se libera la memoria pase lo que pase
    
    return 0; //Se termina el programa
}