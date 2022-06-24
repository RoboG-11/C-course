/*
 *Realloc 
 *Permite ampliar un bloque de memoria reservado anteriormente 
 *realloc();
 **p = realloc(puntero a bloque, tamaño total del nuevo bloque);
 */

#include<stdio.h> //Libreria de entrda y salida
#include<stdlib.h> //Libreria estandar

int main(){ //Funcion principal

    //Declaración de variables
    int *vector, *vectorConvertido;
    int i;

    vector = malloc(3*sizeof(int)); //Se reserva el espacio para tres enteros

    //Primer vector
    vector[0] = 1;
    vector[1] = 2;
    vector[2] = 3;

    //Ciclo que recorre e imprime el vector
    for(i = 0; i < 3; i++){
        printf("%i", vector[i]);
    }

    vectorConvertido = realloc(vector, 5*sizeof(int)); //Se emplea realloc para aumentar el tamaño a 5 elementos

    //Se llenan los dos nuevos espacios 
    vector[3] = 4;
    vector[4] = 5;

    printf("\n\n"); //Formato    

    for(i = 0; i < 5; i++){
        printf("%i", vectorConvertido[i]);
    }
    
    //Se libera la memoria, pase lo que pase
    free(vector);
    free(vectorConvertido);

    return 0; //Se termina el programa
}