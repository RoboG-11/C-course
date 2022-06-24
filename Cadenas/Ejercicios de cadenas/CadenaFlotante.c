//Utilizar la función atof(), para pasar una cadena "123.45" a flotante

#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar

int main(){ //Función principal

    //Declaración de variables
    char *cad = "123.45";
    float valor;

    valor = atof(cad); //Convierte el valor de la cadena a flotante

    printf("Numero flotante: %.2f", valor); //Impresión del resultado

    valor += 5; //Suma al valor 'flotante'
    printf("\nNumero flotante: %.2f", valor); //Impresión del 'flotante'

    return 0; //Se termina el programa
}