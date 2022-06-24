/*
 *Pedir al usuario que digite una cadena, luego copiar su contenido hacia otro array de caracteres, y por 
 *ultimo modificar su mensaje poniendo a partir de la posicion 10 "Buena broma"
 */

#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria con funciones de strings

int main(){ //Funcion principal

    //Declaración de variables
    char cad1[20], cad2[20];

    //Se ingresa y se registra lo ingresado
    printf("Ingrese un stribg: ");
    gets(cad1);

    strcpy(cad2, cad1); //Se copia lo de cad1 a cad2
    strcpy(cad2 + 10, " Buena broma"); //Se va a copiar "Buena broma" a lo ingresado

    printf("%s", cad2); //Se imprime la modificación

    return 0; //Se termina el programa
}