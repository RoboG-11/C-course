/**
 * ORDENAMIENTO BURBUJA
 * Este es un sencillo algoritmo de odenamiento. Funciona revisando cada elemento de la lista que va a ser
 * ordenada con el siguiente, intercambiandolos de posición si están en el orden equivocado. La lista debe
 * de estar ordenada.
 * Este algoritmo obtiene su nombre de a forma con la que suben por la lista los elementos durante los 
 * intercambios, como si fueran pequeñas "burbujas".
 * Este algoritmo es algo lento, ya que ordena mediante muchas comparaciones.
 **/

#include<stdio.h>

int main(){

    //Declaración de variables
    int array[5] = {3, 2, 4, 1, 5};
    int i, j, aux;

    //Bucles for para ordenar el array mediante comparaciones. De menor a mayor
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(array[j] > array[j + 1]){ //Si se quiere de mayor a menor, cambiar "<" por ">"***
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
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