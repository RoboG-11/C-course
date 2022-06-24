//Leer una cadena de caracteres con getchar() y contalibizar cuantos espacios ocupa

#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria con funciones de strings

int main(){

    //Declaración de variables
    int c, cont = 0;
    
    while(EOF != (c = getchar())){ //Mientras sea diferente del final del archivo se va a obtener caracterXcaracter
        cont++; //Aumenta el valor de la variable
    }

    printf("La cadena tiene %i espacios ocupados", cont-1); //Impresión del resultado. -1 por caracter nulo*

    return 0; //Se termina el programa
}