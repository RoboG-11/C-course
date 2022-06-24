/**
 * Ordenamiento por Inserción
 * Es una manera mut natural de ordenar para el ser humano, y puede usarse fácimente para odenar un mazo
 * de cartas numeradas en forma arbitraria. Requiere O(n^2) operaciones para ordenae una lita de n elementos.
 **/

#include<stdio.h>

int main(){

    //Declaración de varaibles
    int array[5] = {3, 1, 4, 2, 5};
    int i, posicion, aux;

    //Ordenamiento por Inserción
    for(i = 0; i < 5; i++){
        posicion = i;
        aux = array[i];
        while((posicion > 0) && (aux < array[posicion - 1])){
            array[posicion] = array[posicion - 1];
            posicion--;
        }
        array[posicion] = aux;
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