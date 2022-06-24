/*
 *Copiar la cadena de caracteres "Hola mundo" de un array a otro. Luego cambiar la palabra "mundo" por
 *"y aprende C"
 */

#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria con fucniones de strings

int main(){ //Función principal

    //Declaración de variables
    char cad1[] = "Hola mundo";
    char cad2[30];

    strcpy(cad2, cad1); //Copia el contenido de cad1 a cad2 
    strcpy(cad2 + 5, "y aprende C"); //Se cambia el contenido por "Hola y aprende C"

    printf("%s", cad2); //Impresión de la modificación del contenido

    return 0; //Se termina el programa
}