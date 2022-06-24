//Reserva memoria con calloc para una cadena de caracteres

#include<stdio.h> //Biblioteca de entrada y salida
#include<stdlib.h> //Biblioteca estandar
#include<string.h> //Biblioteca con funciones de strings

int main(){ //Función principal

    char *c, palabra[50]; //Declaración de variables

    printf("Ingresa una palabra: "); //Se imprime en pantalla
    gets(palabra); //Se guarda en la variable

    c = calloc(strlen(palabra) + 1, sizeof(char)); //Aparta el espacio de memoria dinamica con calloc

    strcpy(c, palabra); //Se copia el contenido de palabra a c

    printf("Palabra: %s", c); //Se imprime el cotenido de la palabra con el apuntador

    free(c); //Se libera la memoria
    printf("\nPalabra (con la memoria dinamica liberada): %s", c); //Comprobando que se liberó el espacio

    return 0; //Se termina el programa
}