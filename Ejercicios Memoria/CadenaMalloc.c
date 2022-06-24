/*
 *Pedir al usuario una cadena de caracteres, reservar memoria con malloc(). Almacenarlo en la memoria dinamica, 
 *posteriormente utilizar free() para liberar el espacio de memoria dinamica utilizado.
 */

#include<stdio.h> //Biblioteca de entrada y salida
#include<stdlib.h> //Biblioteca estandar
#include<string.h> //Biblioteca con funciones de strings

int main(){ //Función principal

    //Declaración de variables
    char palabra[50], *p_palabra;
    int longitud;

    printf("Ingrese una palabra: "); //Solicitud de un string
    gets(palabra); //Se guarda lo ingresado 

    longitud = strlen(palabra); //Se asigan la longitud de la palabra
    p_palabra = malloc((longitud + 1)*sizeof(char)); //Aparta el espacio de memoria dinamica con malloc

    strcpy(p_palabra, palabra); //Se copia el contenido de palabra a p_palabra

    printf("Palabra: %s", p_palabra); //Se imprime el cotenido de la palabra con el apuntador

    free(p_palabra); //Se libera la memoria
    printf("\nPalabra (con la memoria dinamica liberada): %s", p_palabra); //Comprobando que se liberó el espacio

    return 0; //Se termina el programa
}