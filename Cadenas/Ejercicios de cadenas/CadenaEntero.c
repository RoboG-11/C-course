//Convertir una cadena "(1134)", a un numero entero con atoi() --> (caracteres a enteros)

#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar

int main(){ //Función principal

    //Declaración de variables
    char *cad = "20"; //Se tiene que ocupar con apunatdor*
    int valor;

    valor = atoi(cad); //Convierte la cadena a numero entero

    printf("Numero entero: %i", valor); //Impresión del resultado

    valor += 5;
    printf("\nNumero entero: %i", valor); //Impresión del resultado

    return 0; //Se termina el porgrama
}