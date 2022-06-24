/**
 * Ordenamiento por Selección
 * Este es un algoritmo de ordenamiento que requiere O(n^2) operaciones por ordenar una lista de n elementos
 **/

#include<stdio.h>

int main(){

    //Declaración de variables
    int array[5] = {3, 4, 1, 5, 2};
    int i, j, aux, min;

    //Ordenamiento por Selección
    for(i = 0; i < 5; i++){
        min = i;
        for(j = i + 1; j < 5; j++){
            if(array[j] < array[min]){
                min = j;
            }
        }
        aux = array[i];
        array[i] = array[min];
        array[min] = aux;
    }

    //Impresión de forma ascendente
    printf("Forma Ascendete\n");
    for(i = 0; i < 5; i++){
        printf("%i\n", array[i]);
    }

    printf("\n\n");

    //Impresión de forma descentente
    printf("Forma descentente\n");
    for(i = 4; i >= 0; i--){
        printf("%i\n", array[i]);
    }

    return 0;
}