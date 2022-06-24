/**
 * Busqueda secuencial en C
 * Este metodo busca algún elemento en una estructura, no es necesario que los datos se encuentren
 * ordenamos de alguna manera.
 */

#include<stdio.h>

int main(){

    //Declaración de variables 
    int array[5] = {3, 2, 1, 4, 5};
    char bandera = 'F';
    int i = 0, dato = 4;

    //Ciclo que recorre el arreglo para encontrar 'dato'
    while( (bandera == 'F') && (i < 5) ){
        if(array[i] == dato){
            bandera = 'V';
        }
        i++;
    }

    //Impresión de la condición 
    if(bandera == 'F'){
        printf("\nEl numero no existe en el array\n");
    }else if (bandera == 'V'){
        printf("\nEl numero existe en la pocision %i del array\n\n", i);
    }

    return 0;
}