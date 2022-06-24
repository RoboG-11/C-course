/*main de la lista simple main_listaD.c*/

//typedef int TipoDato;
#include "lista_doble.h"
#include <stdio.h>
#include <stdlib.h>


int main (){
    ListaD *L;
    Nodo *aux1, *aux2;
    L=crear_ListaD();

    insertar_cabeza(L,crear_Nodo(crear_Alumno(1,"areli",25)));
    insertar_cabeza(L,crear_Nodo(crear_Alumno(2,"rojo",25)));
    insertar_cabeza(L,crear_Nodo(crear_Alumno(3,"hndz",25)));
    insertar_cola(L,crear_Nodo(crear_Alumno(4,"mario",25)));

    aux2=crear_Nodo(crear_Alumno(2,"garcia",24));
    aux1=buscaElemento(L, aux2);

    insertar_enmedioA(L, aux1, crear_Nodo(crear_Alumno(5,"torres",28)));
    printLista(L);


    quitar_cabeza(L);
    quitar_cola(L);
    quitar_enmedio(L, aux1);
    printLista(L);


    vaciarLista(L);
    printLista(L);

    vaciarLista(L);
    printLista(L);

    
  /*  aux2=crear_Nodo(crear_Alumno(5,"ddd",24));
    aux1=buscaElemento(L, aux2);

    insertar_enmedioA(L, aux1, crear_Nodo(crear_Alumno(9,"perez",27)));
    printLista(L);

    quitar_cabeza(L);
    printLista(L);

    quitar_cola(L);
    printLista(L);
    
    quitar_enmedio(L, aux1);

    printLista(L);

    //printf("\naqui voy\n");

    vaciarLista(L);
    printLista(L);

    insertar_cabeza(L,crear_Nodo(crear_Alumno(1,"nova",25)));
    printLista(L);

    */
    //free(L);
    //free(aux1);
    //free(aux2);
    //system ("pause");
    return(0);

}