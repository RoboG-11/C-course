//Invertir una cadena con strrev();

#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria con funciones de string

int main(){ //Función principal

    char palabra[20]; //Declaración de variable

    printf("Ingresa una palabra: "); //Solicitud de palabra
    gets(palabra); //Se guarda lo ingresado en 'palabra'

    printf("\n\nPalabra insertada: %s", palabra); //Impresion de la palabra

    strrev(palabra); //Invierte la palabra

    printf("\nPalabra invertida: %s", palabra); //Imprime la palabra invertida

    return 0; //Se termina el programa
}