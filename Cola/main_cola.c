/*main_cola.c* todas funciones*/
/*Librerias*/
#include "cola.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    Cola *C;
    Nodo *aux, *aux2;
    //int ID;
    C=crear_Cola();

    insertar_cola(C,crear_Nodo(crear_Alumno(1,"areli",25)));
    insertar_cola(C,crear_Nodo(crear_Alumno(2,"rojo",24)));
    insertar_cola(C,crear_Nodo(crear_Alumno(3,"hernandez",23)));
    printCola(C);

    //ID=2;
    //aux2=crear_Nodo(crear_Alumno(5,"ffghh",22));
    //aux=buscaElemento(C, aux2);
    aux=buscaElemento(C, 5);
    if(aux!=NULL){
        printf("El nodo aux tiene el id %d\n",aux->datos->id);
        printf("El nodo aux tiene el name %s\n",aux->datos->name);
    }
    

    quitar_cabeza(C);
    printCola(C);
    
    vaciarCola(C);
    printCola(C);

    vaciarCola(C);
    //printCola(C);

    return(0);

}