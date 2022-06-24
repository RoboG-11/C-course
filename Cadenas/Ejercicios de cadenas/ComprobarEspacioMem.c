/*
 *Reservar espacio en memoria con malloc para un array de tipo double para 1000 numeros y comprobar si el puntero 
 *es valido (si el puntero devuelve NULL, significa que no hay sificiente memoria).
 */

#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar (ubucaciones de memoria)
#define TOPE 1000 //Macro con valor de 1000

int main(){ //Función principal

    double *p_array; //Apuntador de tipo double 
    int i; //Declaración de la variable iterativa
    p_array = malloc(TOPE *sizeof(double)); //Se ocupa malloc para ver el tamaño*

    if(p_array == NULL){ //Condición de fallo
        printf("Error en la asigancion de memoria"); //Impresion de mensaje de fallo
        return -1; //Intentar recuperar memoria
    }else{ //De lo contrario 
        srand(time(NULL)); //Numero random
        for(i = 0; i < TOPE; i++){ //Bucle hasta el 1000
            p_array[i] = 1 + rand() % ((TOPE + 1) - 1); //Longitud del array
            printf("%lf.\n", p_array[i]); //Impresión de numero en la posisción i
        }
    }

    free(p_array); //Libera la memoria

    return 0; //Se termina el programa

}