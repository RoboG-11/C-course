/*
 *Funcion calloc(); 
 *puntero = calloc(numero de elementos, tamaño de cada elemento);
 */

#include<stdio.h> //Biblioteca de entrada y salida
#include<stdlib.h> //Biblioteca estandar

int main(){ //Función principal


    //Declaración de variables
    int *p1;
    int i;

    p1 = calloc(5, sizeof(int)); //Reserva de memoria con calloc
    //p1 = malloc(5*sizeof(int)); //Reserva de memeoria con malloc

    for(i = 0; i < 5; i++){ //Ciclo que recorre un array de 5 elementos
        printf("Ingrese un numero: "); //Se imprime en pantalla
        scanf("%i", &p1[i]); //Se guarda en el array
    }

    printf("\n\n"); //Formato de salto de linea

    for(i = 0; i < 5; i++){ //For que imprime todo el array
        printf("%i\n", p1[i]); //Imprime el contenido de la variable
    }

    free(p1); //Se libera la memoria

    printf("\n\n"); //Formato de salto de linea

    for(i = 0; i < 5; i++){ //For que imprime todo el array vacio
        printf("%i\n", p1[i]); //Imprime el contenido de la variable
    }

    return 0; //Se termina el programa
}