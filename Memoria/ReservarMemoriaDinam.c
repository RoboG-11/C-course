//Utilizar malloc para reserva memoria para un nombre

#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar
#include<string.h> //Libreria con funciones de strings

int main(){ //Función principal

    //Declaración de variables
    char nombre[20], *pNombre;
    int longitud;

    strcpy(nombre, "Brian"); //Se copia el nombre a la variable
    longitud = strlen(nombre); //Longitud de la variable

    printf("Longitud del nombre: %i\n", longitud); //Se imprime la longitud
    pNombre = malloc((longitud + 1) *sizeof(char)); //Se guarda la memoria en la variable

    strcpy(pNombre, nombre); //Se copia el nombre al apuntador
    printf("Nombre: %s", pNombre); //Se imprime el apuntador

    free(pNombre); //Se libera la memoria pase lo que pase

    return 0; //Se termina el programa
}