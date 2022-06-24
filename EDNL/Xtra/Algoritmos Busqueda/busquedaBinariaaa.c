/**
 * Busqueda Binaria o Dicotomica
 * Este metodo busca algún elemento en una estructura, aquí sí es necesario que los datos se encuentren
 * ordenamos de alguna manera
 */

#include<stdio.h>

int main(){

    //Declaración de variables
    int array[5] = {1, 2, 3, 4, 5};
    int inf, sup, mitad, dato;
    char bandera = 'F';

    //Busqueda Binaria 
    dato = 3;
    inf = 0;
    sup = 5;

    //Ciclo que recorre todo el arreglo
    while(inf <= sup){
        mitad = (inf + sup) / 2;

        if(array[mitad] == dato){
            bandera = 'V';
            break;
        }
        if(array[mitad] > dato){
            sup = mitad;
            mitad = (inf + sup) / 2;
        }
        if(array[mitad] < dato){
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
    }

    //Impresión de la condición 
    if(bandera == 'F'){
        printf("\nEl numero no existe\n");
    }else if(bandera = 'V'){
        printf("\nEl numero existe en la posicion %i del array\n\n", mitad);
    }

    return 0;
}