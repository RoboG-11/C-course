/*
 *Reserva memoria dinamica para una cadena de caracteres de 10 espacios, luego utilizar realloc (ampliar) para
 *ampliar la memroua dinamica a 30 espacios
 */

#include <stdio.h> //Libreria de entrada y salida
#include <stdlib.h> //Libreria estandar
#include <string.h> //Libreria con funciones para strings

int main(){ //Función principal

    char *p_nombre, *p_nombreCompleto; //Definicion de los punteros

    p_nombre = malloc(10*sizeof(char)); //Reservando memoria 

    strcpy(p_nombre, "Brian"); //Se copia el string a p_nombre
    printf("Nombre: %s", p_nombre); //Se imprime el contenido de p_nombre

    //Ampliando cadena de caracteres a 30 espacios
    p_nombreCompleto = realloc(p_nombre, 30*sizeof(char));
    strcat(p_nombreCompleto, " Rivera Martinez"); //Concatena el contenido --> Brian Rrivera Martinez

    printf("\nNombre Completo: %s", p_nombreCompleto); //Imprime el nombre completo

    return 0; //Se termina el programa
}