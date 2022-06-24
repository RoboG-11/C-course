/*
 *Convertir dos cadenas de inusculas a MAYUSCULAS con la función strupr(), y comparar si son iguales
 */

#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria con funciones de strings

int main(){ //Función principal

    char palabra1[] = "hola", palabra2[] = "HoLa"; //Declaración de variables

    strupr(palabra1); //Convierte palabra1 a mayusculas
    printf("Palabra en mayusculas: %s", palabra1); //Imprime palabra1 con la modificación

    if(strcmp(palabra1, palabra2) == 0){ //Compara si palabra1 y palabra2 som iguales
        printf("\nAmbas palabras son iguales");
    }else{ //De lo contrario
        printf("\nLas palabras son diferentes");
    }

    return 0; //Se termina el programa
}