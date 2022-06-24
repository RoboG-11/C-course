//Archivo tipo header
//Se ocupan APUNTADORES, ya que los valores estan en otro archivo

#include<stdio.h> //Incluimos la libreria de entrada y salida

int suma(int *p_a, int *p_b){ //Función que recibe dos valores con apuntadores

    int a; //Declaración de variable

    a = *p_a + *p_b; //Operación de la suma en la variable a

    return a; //Se regresa el valor de la suma
}


int resta(int *uno, int *dos){ //Función que recibe dos valores con apuntadores

    int res = *uno - *dos; //Declaración de la varible con su valor

    return res; //Se regresa el valor de la resta
}


int multiplicacion(int *p_a, int *p_b){ //Función que recibe dos valores con apuntadores

    int a; //Declaración de variable

    a = (*p_a) * (*p_b); //Operación de la multiplicacion en la variable a

    return a; //Se regresa el valor de la multiplicacion
}


int division(int *uno, int *dos){ //Función que recibe dos valores con apuntadores

    int div = (*uno) / (*dos); //Declaración de la varible con su valor

    return div; //Se regresa el valor de la division
}