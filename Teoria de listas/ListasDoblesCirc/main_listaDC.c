/*main de la lista doble circular main_listaDC.c*/

//typedef int TipoDato;
#include "listaDC.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
    ListaDC *p;
    Nodo *aux, *aux2;

    p=crear_ListaDC();
    
    insertar_cabeza(p,crear_Nodo(crear_Alumno(1,"areli",25)));
    insertar_cabeza(p,crear_Nodo(crear_Alumno(2,"rojo",24)));
    insertar_cabeza(p,crear_Nodo(crear_Alumno(3,"hernandez",23)));
    insertar_cola(p,crear_Nodo(crear_Alumno(4,"mario",21)));
    printLista(p);
   
    aux2=crear_Nodo(crear_Alumno(2,"rojo",24));
    //aux2=crear_Nodo(crear_Alumno(7,"alvarez",24));
    aux=buscaElemento(p, aux2);

    //quitar_enmedio(p, aux);
    //printLista(p);

    //insertar_enmedioA(p, aux, crear_Nodo(crear_Alumno(5,"garcia",28)));
    //printLista(p);

    //aux2=crear_Nodo(crear_Alumno(4,"rojo",24));
    //aux=buscaElemento(p, aux2);
    //insertar_enmedioD(p, aux, crear_Nodo(crear_Alumno(7,"torres",28)));
    //printLista(p);

    
    insertar_cabeza(p,crear_Nodo(crear_Alumno(7,"Tami",25)));
    insertar_cabeza(p,crear_Nodo(crear_Alumno(8,"Wiwi",25)));
    insertar_cabeza(p,crear_Nodo(crear_Alumno(9,"Waya",25)));
   
    printLista(p);

    quitar_cabeza(p);
    quitar_cola(p);
    printLista(p);
    
    vaciarListaR(p);
    printLista(p);
    vaciarLista(p);
    printLista(p);

    //free(p);
    //free(aux);
    //free(aux2);
   // system ("pause");
    return(0);
}