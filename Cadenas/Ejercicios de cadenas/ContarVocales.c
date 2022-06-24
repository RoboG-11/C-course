/*
 *Leer un string con getchar() y contabilizae cuantas veces aparecen las vocales, e imprimir el contador de cada
 *una de ellas. 
 */

#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria con funciones de strings

int main(){

    //Declaración de variables
    int c, contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;

    printf("Ingrese una palabra: "); //Ingreso de la palabra

    while(EOF != (c = getchar())){ //Mientras sea diferente del final del archivo se va a obtener caracterXcaracter
        switch(c){ //Switch para sumar los distintos caracteres
            case 'a':
                contA++;
                break;
            case 'e':
                contE++;
                break;
            case 'i':
                contI++;
                break;
            case 'o':
                contO++;
                break;
            case 'u':
                contU++;
                break;
        }
        putchar(c); //Imprime los caracteres con putchar()
    }

    //Impresión del resultado
    printf("\nVocal a: %i", contA);
    printf("\nVocal e: %i", contE);
    printf("\nVocal i: %i", contI);
    printf("\nVocal o: %i", contO);
    printf("\nVocal u: %i", contU);

    return 0; //Se termina el programa
}