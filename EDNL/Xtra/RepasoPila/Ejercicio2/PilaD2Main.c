/*main de la pila main_pilaD2.c*/

//typedef int TipoDato;
#include "pilaD2.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    Pila *p;
    //Nodo *aux;
    p=crear_Pila();

    push(p,crear_Nodo(crear_Alumno(1,"areli",25)));
    push(p,crear_Nodo(crear_Alumno(2,"rojo",24)));
    push(p,crear_Nodo(crear_Alumno(3,"hernandez",23)));
    printPila(p);

    //aux=pop(p);
    pop(p);
    //printf("\n el nodo que salio es: %d",aux->datos->id);
    //free(aux);
    printPila(p);
    vaciar(p);
    printPila(p);
    free(p);
    system("pause");
    return(0);

}