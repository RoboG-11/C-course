/**
 * Busqueda Binaria o Dicotomica
 * Este metodo busca algún elemento en una estructura, aquí sí es necesario que los datos se encuentren
 * ordenamos de alguna manera
 */
#include<stdio.h>

int main(){

    //Declaración de variables
    int array[15] = {2, 7, 9, 9, 14, 23, 36, 38, 40, 42, 45, 48, 60, 62, 63};
    int inf, sup, mitad, dato;
    char bandera = 'F';

    //Busqueda Binaria 
    dato = 63;
    inf = 0;
    sup = 15;

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
        printf("\nEl numero %i existe en la posicion %i del array\n\n", dato, mitad);
    }

    return 0;
}