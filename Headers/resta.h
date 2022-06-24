//Archivo tipo header
//Se ocupan APUNTADORES, ya que los valores estan en otro archivo

#include<stdio.h>  //Incluimos la libreria de entrada y salida

int resta(int *uno, int *dos){ //Función que recibe dos valores con apuntadores

    int res = *uno - *dos; //Declaración de la varible con su valor

    return res; //Se regresa el valor de la resta
}